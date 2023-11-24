#include<bits/stdc++.h>
using namespace std;

set<char> room;

int main()
{
    int n, m;
    char maincolor;

    cin >> n >> m >> maincolor;

    char matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == maincolor)
            {
                if (i != 0 && matrix[i - 1][j] != maincolor)
                {
                    room.insert(matrix[i - 1][j]);
                }
                if (i != n - 1 && matrix[i + 1][j] != maincolor)
                {
                    room.insert(matrix[i + 1][j]);
                }
                if (j != 0 && matrix[i][j - 1] != maincolor)
                {
                    room.insert(matrix[i][j - 1]);
                }
                if (j != m - 1 && matrix[i][j + 1] != maincolor)
                {
                    room.insert(matrix[i][j + 1]);
                }
            }
        }
    }

    if (room.find('.') != room.end())
    {
        cout << room.size() - 1;
    }
    else
        cout << room.size();
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;

    while (cin >> a >> b >> c >> d)
    {
        if ((a < b + c && b < a + c && c < a + b) || (a < b + d && b < a + d && d < a + b) || (a < d + c && d < a + c && c < a + d) || (d < b + c && b < d + c && c < d + b))
            cout << "TRIANGLE" << endl;
        else if ((a == b + c || b == a + c || c == a + b) || (a == b + d || b == a + d || d == a + b) || (a == d + c || d == a + c || c == a + d) || (d == b + c || b == d + c || c == d + b))
            cout << "SEGMENT" << endl;
        else
            cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
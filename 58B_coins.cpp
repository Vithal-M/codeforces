#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    while (n != 1)
    {
        printf("%d ", n);
        for (int i = 2; i <= n; ++i)
        {
            if (n % i == 0)
            {
                n /= i;
                break;
            }
        }
    }
    printf("%d\n", n);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        if (s[0] == '1')
        {
            ans++;
        }
        else if (s[0] == '0')
        {
            ans += 10;
        }
        else
        {
            string c;
            c += s[0];
            int b = stoi(c);
            ans += abs(1 - b);
            ans++;
        }

        for (int i = 1; i < 4; i++)
        {
            if (s[i] == '0' && s[i - 1] == '0')
            {
                ans++;
            }
            else if (s[i] == '0')
            {
                string c;
                c += s[i - 1];
                int b = stoi(c);
                int a = abs(10 - b);
                ans += a;
                ans++;
            }
            else if (s[i - 1] == '0')
            {
                string c;
                c += s[i];
                int b = stoi(c);

                int a = abs(b - 10);
                ans += a;
                ans++;
            }
            else
            {
                string c;
                c += s[i - 1];
                int b = stoi(c);
                string d;
                d += s[i];
                int e = stoi(d);

                int a = abs(e - b);
                ans += a;
                ans++;
            }
        }
        cout << ans << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
bool ispar(string x)
{
    // Your code here
    stack<char> st;
    int n = x.size();
    for (int i = 0; i < n; i++)
    {
        if (x[i] == '(' || x[i] == '[' || x[i] == '{')
        {
            st.push(x[i]);
        }
        else if (st.empty() == true)
        {
            return false;
        }
        else
        {
            switch (x[i])
            {
            case ')':
                if (st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
                break;
            case ']':
                if (st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
                break;
            case '}':
                if (st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
                break;
            }
        }
    }
    if (st.empty() == true)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    string a;
    cin >> t;

    while (t--)
    {
        cin >> a;

        if (ispar(a))
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }

    return 0;
}

// g++ -o ispar paranthesis.cpp
// ./ispar
// 1
// ({})
// balanced

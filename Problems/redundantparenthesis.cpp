#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    string s;
    cin >> s;
    stack<char> st;
    bool ans = false;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else if(s[i] == '(')
        {
            st.push(s[i]);
        }
        else if(s[i] == ')')
        {
            if (st.top() == '(')
            {
                ans = true;
            }

            while (!st.empty() && st.top() != '(')
            {
                st.pop();
            }

            if (!st.empty()) // Remove the '(' from the stack
            {
                st.pop();
            }
        }
    }
    cout << ans;
    return 0;
}

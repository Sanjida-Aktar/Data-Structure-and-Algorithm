#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    string s;

    while(cin >> s)
    {
        if(s == "+" || s == "-" || s == "*")
        {
            int a = st.top();
            st.pop();

            int b = st.top();
            st.pop();

            if(s == "+")
                st.push(a + b);

            else if(s == "-")
                st.push(b - a);

            else if(s == "*")
                st.push(a * b);
        }
        else
        {
            st.push(stoi(s));
        }
    }

    cout << st.top() << endl;

    return 0;
}
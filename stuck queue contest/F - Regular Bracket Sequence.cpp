#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
    cin>>s;
    stack<char> st;
    int count=0;
    for(char c:s){
        if(c=='('){
            st.push(c);
        }
        else if(!st.empty() && c==')' && st.top()=='('){
            count+=2;
                st.pop();
            }
            else{
                st.push(c);
            }
        }
    cout<<count<<endl;
    return 0;
}
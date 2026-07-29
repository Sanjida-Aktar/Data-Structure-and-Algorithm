#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
     {
        string s;
     cin>>s;
     stack<char>st;
     for(char c:s){
        if(!st.empty() && st.top() != c)
        {
            st.pop();
        }
        else{
            st.push(c);
        }
     }
     if(!st.empty()){
        cout<<"NO"<<endl;
     }
     else{
        cout<<"YES"<<endl;
     }
     }
    return 0;
}
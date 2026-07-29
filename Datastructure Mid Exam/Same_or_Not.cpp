#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,m;
     cin>>n>>m;
     stack<int>st;
     int val;
     for(int i=0; i<n; i++){
        cin>>val;
        st.push(val);
     }
     queue<int>q;
     int v;
     for(int i=0; i<m; i++){
        cin>>v;
        q.push(v);
     }
     if(n != m){
        cout<<"NO";
        return 0;
     }
     while(!st.empty()){
        if(st.top()!= q.front()){
            cout<<"NO"<<endl;
            return 0;
        }
        st.pop();
        q.pop();
     }
     
     cout<<"YES"<<endl;
    return 0;
}
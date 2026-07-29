#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,m;
     cin>>n>>m;
     vector<int>v1;
     vector<int>v2;
     for(int i=0; i<n; i++)
     {
        int x;
        cin>>x;
        v1.push_back(x);
     }
     for(int i=0; i<m; i++)
     {
        int x;
        cin>>x;
        v2.push_back(x);
     }
     if(n !=m){
        cout<<"NO"<<endl;
        return 0;
     }
     while(!v1.empty()){
        if(v1.front() != v2.back()){
            cout<<"NO"<<endl;
            return 0;
        }
        v1.pop_back();
        v2.erase(v2.begin());
     }
     cout<<"YES"<<endl;
    return 0;
}
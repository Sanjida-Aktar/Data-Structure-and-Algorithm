#include<bits/stdc++.h>
using namespace std;

     int p[100005];
     int find(int x){
         if(p[x]==x){
             return x;
         }
         return p[x]=find(p[x]);
     }
     int main(){
         int n,m;
         cin>>n>>m;
         for(int i=1;i<=n;i++){
             p[i]=i;
         }
         int count=0;
         for(int i=0;i<m;i++){
             int u,v;
             cin>>u>>v;
             int pu=find(u);
             int pv=find(v);
             if(pu==pv){
                 count++;
             }
             else{
                 p[pu]=pv;
             }
         }
         cout<<count<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,m;
     cin>>n>>m;
     long long INF=1e18;
     vector<vector<long long>> dist(n+1,vector<long long>(n+1,INF));
     for(int i=1;i<=n;i++){
         dist[i][i]=0;
     }
     for(int i=0;i<m;i++){
         int u,v;
         long long w;
         cin>>u>>v>>w;
         if(w<dist[u][v]){
             dist[u][v]=w;
         }
     }
     for(int k=1;k<=n;k++){
         for(int i=1;i<=n;i++){
             for(int j=1;j<=n;j++){
                 if(dist[i][k]!=INF && dist[k][j]!=INF){
                     dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                 }
             }
         }
     }
     int q;
     cin>>q;
        while(q--){
            int s,d;
            cin>>s>>d;
            if(dist[s][d]==INF){
                cout<<-1<<endl;
            }
            else{
                cout<<dist[s][d]<<endl;
            }
        }
    return 0;
}
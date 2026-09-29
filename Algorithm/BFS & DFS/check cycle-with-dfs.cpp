#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[105];
bool vis[105];
bool cycle;
int parent[105];

void dfs(int src) {
    vis[src] = true;
    for (int child : adj_list[src]) {
        if (!vis[child]) {
            parent[child] = src;
            dfs(child);
        } else if (child != parent[src]) {
            cycle = true;
        }
    }
}

int main(){
     int n,e;
     cin>>n>>e;
     while(e--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
     }
     memset(vis,false,sizeof(vis));
     memset(parent,-1,sizeof(parent));
     cycle = false;
     for(int i=0; i<n; i++){
         if(!vis[i]){
             dfs(i);
         }
     }
     if(cycle)
        cout<<"Cycle Detected"<<endl;
     else
        cout<<"No Cycle Detected"<<endl;
    return 0;
}
// C++ program to detect cycle in an undirected graph using BFS
#include<bits/stdc++.h>
using namespace std;
// global variables
bool cycle_detected = false;
bool vis[105];
vector<int>adj_list[105];

void bfs(int src)
{ 
    queue<pair<int,int>>q;
    q.push({src,-1});
    vis[src]=true;

    while(!q.empty()){
        int par = q.front().first;
        int parent = q.front().second;
        q.pop();
        
        for(int child : adj_list[par]){
            if(vis[child]== false){
                q.push({child,par});
                vis[child]= true;
            }
            else if(parent != child){
                cycle_detected = true;
                return;
            }
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
for(int i=0; i<n; i++)
{
    if(!vis[i])
    {
        bfs(i);
    }
}
if(cycle_detected)
    cout<<"Cycle Detected"<<endl;   
    else
    cout<<"No Cycle Detected"<<endl;
    return 0;
}
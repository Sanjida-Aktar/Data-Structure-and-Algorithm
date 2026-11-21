#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n,m;
     cin>>n>>m;
      int si,sj,di,dj;
     cin>>si>>sj;
     cin>>di>>dj;

        vector<vector<int>> vis(n,vector<int>(m,-1));
        queue<pair<int,int>> q;
        q.push({si,sj});
        vis[si][sj]=0;
        int dx[]={-2,-2,-1,-1,1,1,2,2};
        int dy[]={-1,1,-2,2,-2,2,-1,1};
        while (!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<8;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx>=0 && nx<n && ny>=0 && ny<m && vis[nx][ny]==-1) {
                    vis[nx][ny]=vis[x][y]+1;
                    q.push({nx,ny});
                }
            }
        }
        cout<<vis[di][dj]<<endl;
    }  
    return 0;
}
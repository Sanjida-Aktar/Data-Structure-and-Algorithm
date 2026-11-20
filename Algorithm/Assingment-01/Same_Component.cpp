#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,m;
     cin>>n>>m;
     vector<string> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int si,sj,di,dj;
     cin>>si>>sj;
        cin>>di>>dj;
        vector<vector<int>> vis(n,vector<int>(m,0));

        queue<pair<int,int>> q;
        q.push({si,sj});
        vis[si][sj]=1;
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        while (!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            if(x==di && y==dj){
                cout<<"YES"<<endl;
                return 0;
            }
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx>=0 && nx<n && ny>=0 && ny<m && a[nx][ny]=='.' && !vis[nx][ny]) {
                    vis[nx][ny]=1;
                    q.push({nx,ny});
                }
            }
        }
    
        cout<<"NO"<<endl;
        
    return 0;
}
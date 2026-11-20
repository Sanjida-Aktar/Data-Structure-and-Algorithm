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
        int ans= INT_MAX;
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]=='.' && !vis[i][j]){
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    vis[i][j]=1;
                    int area=0;
                    while (!q.empty())
                    {
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        area++;
                        for(int k=0;k<4;k++){
                            int nx=x+dx[k];
                            int ny=y+dy[k];
                            if(nx>=0 && nx<n && ny>=0 && ny<m && a[nx][ny]=='.' && !vis[nx][ny]) {
                                vis[nx][ny]=1;
                                
                                q.push({nx,ny});
                            }
                        }
                    }
                    ans=min(ans,area);
                }
            }
        }
        if(ans==INT_MAX){
            cout<<"-1"<<endl;

        }
        else{
            cout<<ans<<endl;
        }
    return 0;
}
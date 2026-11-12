#include<bits/stdc++.h>
using namespace std;
int main(){
     int n, p;
    cin>>n>>p;
    queue<pair<int,int>> q;
    for(int i=1;i<=n; i++){
        int a;
        cin>>a;
        q.push({a,i});

    }
    int ans=0;
    while(!q.empty()){
        int candy=q.front().first;
        int id=q.front().second;
        q.pop();
        candy-=p;
        if(candy>0){
            q.push({candy,id});
        }
        else{
            ans= id;
        }
    }
    cout<<ans<<endl;
    return 0;
}
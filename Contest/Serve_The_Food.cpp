#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     queue<long long>q;
     while(t--){
        int type;
        cin>>type;
        if(type==1){
            long long v;
            cin>>v;
            q.push(v);
        }
        else if(type==2){
            if(q.empty()){
                cout<<"-1";
            }
            else{
                cout<<q.front()<<endl;
                q.pop();
            }

        }
     }
    return 0;
}
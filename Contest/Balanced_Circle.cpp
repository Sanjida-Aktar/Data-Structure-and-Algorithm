#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        int maxn= INT_MAX;
        int count =0;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x<maxn){
                maxn= x;
                count=1;

            }
            else if(x==maxn){
                count++;
            }

        }
        if(count>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
     }
    return 0;
}
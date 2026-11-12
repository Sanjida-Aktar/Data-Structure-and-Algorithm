#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     for(int i=0; i<t; i++){
        long long n;
        cin>>n;
        if(n%2 !=0){
            cout<<"Case "<<i+1<<": Impossible"<<endl;
            continue;
        }
        long long s=1;
        while(n%2==0){
            n/=2;
            s*=2;
        }
        cout<<"Case "<<i+1<<": "<<n<<" "<<s<<endl;
     }
    return 0;
}
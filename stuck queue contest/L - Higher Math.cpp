#include<bits/stdc++.h>
using namespace std;
void solve(int a, int b, int c, int i){
    
    long long ans=0;
    ans+=(a*a +b*b);
        if(ans==c*c){
            cout<<"Case "<<i+1<<": yes"<<endl;
        }
        else{
            cout<<"Case "<<i+1<<": no"<<endl;
        }
}
int main(){
     int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && a>c){
            solve(b,c,a,i);
        }
        else if(b>a && b>c){
            solve(a,c,b,i);
        }
        else{
            solve(a,b,c,i);
        }
     }

    return 0;
}
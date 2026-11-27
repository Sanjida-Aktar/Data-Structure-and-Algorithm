#include<bits/stdc++.h>
using namespace std;
long long my_gcd(long long a,long long b){
    while (b!=0){
        long long temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
     long long   t;
        cin>>t;
        while(t--){
            long long l,a,b;
            cin>>l>>a>>b;
            long long x= l/my_gcd(l,a);
            long long y= l/my_gcd(l,b);
            long long    ans=my_gcd(x,y);
            cout<<ans<<endl;
        }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int my_gcd(int a,int b){
    while (b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
     int t;
        cin>>t;
        while(t--){
            int l,a,b;
            cin>>l>>a>>b;
            int x= l/my_gcd(l,a);
            int y= l/my_gcd(l,b);
            int ans=my_gcd(x,y);
            cout<<ans<<endl;
        }
    return 0;
}
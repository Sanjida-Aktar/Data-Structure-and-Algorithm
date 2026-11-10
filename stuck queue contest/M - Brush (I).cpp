#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin>>t;
    int c=1;

    while(t--){
        int n;
        cin>>n;
        long long sum=0;
       for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x>0)
            sum+=x;
        }
        cout<<"Case "<<c<<": "<<sum<<endl;
        c++;
    }
    return 0;
}
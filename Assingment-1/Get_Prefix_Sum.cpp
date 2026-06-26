#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     vector<long long int>arr(n);
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     vector<long long int>v(n);
     v[0]=arr[0];
     for(int i=1; i<n; i++){
        v[i]= v[i-1]+arr[i];
     }

     for(int i=n-1; i>=0; i--){
        cout<<v[i]<<" ";
     }
    return 0;
}
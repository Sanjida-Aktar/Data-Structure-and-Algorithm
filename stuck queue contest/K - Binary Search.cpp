#include<bits/stdc++.h>
using namespace std;
int main(){
    long long c=0;
     long long n;
     cin>>n;
     vector<int> arr(n);
     for(long long i=0;i<n;i++){
       cin>>arr[i];
     }
        long long m;
        cin>>m;
        vector<int> arr2(m);
        for(long long i=0;i<m;i++){
            cin>>arr2[i];
        }
        
           for(long long i=0;i<m;i++){
            for(long long j=0;j<n;j++){
                if(arr2[i]==arr[j]){
                c++;
                break;
            }
        }
        }
        cout<<c<<endl;

    return 0;
}
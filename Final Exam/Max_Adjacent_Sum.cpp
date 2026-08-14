#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     long oddmax=0;
     long evenmax=0;
     for(int i=0; i<n; i++){
        long v;
        cin>>v;
        if(i %2==0){
            evenmax= max(evenmax, v);
        }
        else{
            oddmax= max(oddmax,v);
        }
        
     }
     cout<<oddmax+evenmax<<endl;
    return 0;
}
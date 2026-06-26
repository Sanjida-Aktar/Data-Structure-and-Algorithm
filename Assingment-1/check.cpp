#include<bits/stdc++.h>
using namespace std;

// a1={1,2,3,4}
// a2={30,40}
// indx= 2
// result= {1,2,30,40,3,4};

int main(){
     int n;
     cin>>n;
     vector<int>a(n);
     int m;
     cin>>m;
     vector<int>b(m);
     int indx;
     cin>>indx;

    //  a.resize(n+m);
     a.insert(a.begin()+indx,b.begin(),b.end());

     for(int i; i<n; i++){
        cout<<a[i]<<" ";
     }
    return 0;
}
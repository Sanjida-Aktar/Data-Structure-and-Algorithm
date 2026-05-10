#include<iostream>
#include<set>
using namespace std;
int main(){
     set<int>c;
     int n;
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++){
        cin>> arr[i];
     }

    //  c.insert(arr[n]);
    for(int it : c){
        c.insert(arr[it]);
    }
    cout<<"printf\n";
    for(int it: c){
        cout<<it <<" ";
    }

    return 0;
}
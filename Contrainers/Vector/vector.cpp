#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v={2,3,4,5};

     vector<int>v1(3,10);//(size, value)

     for(int it: v){
        cout<<it<<" ";
     }
     cout<<endl;

     for(int it: v1){
        cout<<it<<" "; //10 10 10
     }
    return 0;
}
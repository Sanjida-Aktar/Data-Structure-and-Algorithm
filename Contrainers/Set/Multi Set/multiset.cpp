#include<iostream>
#include<set>
using namespace std;
int main(){

    //allaw duplicate value

     multiset<int>m={1,3,4,1,1,5,6};
     for(auto it: m){
        cout<<it<<" ";
     }
    return 0;
}
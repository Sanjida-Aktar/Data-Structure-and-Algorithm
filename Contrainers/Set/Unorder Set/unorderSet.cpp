#include<iostream>
#include<unordered_set>
using namespace std;
//not allow duplicate value
//randomly printed output
int main(){
     unordered_set<int>s={1,2,2,3,4,5};
     for(int it: s){
        cout<<it<<" ";
     }
    return 0;
}
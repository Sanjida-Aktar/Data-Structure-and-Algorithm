#include<iostream>
#include<deque>
using namespace std;
int main(){
     deque<int> d={1,2,3,4,5};
     
     for(int it : d){
        cout<<it <<" ";
     }
    return 0;
}
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l={6,2,3,4,5};
   
    l.push_back(1);
    l.push_back(3);
    l.push_front(4);
    l.pop_back();

    ///random access not possible

    for(auto it= l.begin(); it!=l.end(); it++){
        cout<<*(it)<<" ";
    }
    return 0;
}
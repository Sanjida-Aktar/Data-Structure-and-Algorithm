#include<iostream>
#include<map>
using namespace std;
int main(){
     multimap<int, int>m;
     m.insert({9,5});
     m.insert({3,6});
     m.insert({4,6});
     for(auto it : m){
     cout<<it.first<<" "<<it.second<<endl;
     }
    return 0;
}
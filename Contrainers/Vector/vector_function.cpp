#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int> v;
     v.push_back(10);
     v.push_back(20);
     v.push_back(30);
     v.push_back(30);
     v.push_back(30);

     v.pop_back();

     cout<<"size: "<<v.size()<<endl;
     cout<<"capacity: "<<v.capacity()<<endl;
     cout<<"1 nb index: "<<v[1]<<endl;

     for(int it: v){
        cout<< it<<" ";
     }
    return 0;
}
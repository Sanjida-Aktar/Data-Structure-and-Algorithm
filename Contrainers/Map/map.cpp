#include<iostream>
#include<map>
using namespace std;

// it works by default asending oederof key
int main(){
     map<string,int>m;
     m.insert({"sanjida",3});
     m.insert({"bristy",5});
     m.insert({"misty",4});
     m.insert({"sristy",9});

     
     for(auto it: m){
        cout<<it.first<<" "<<it.second<<endl;
     }
     
    return 0;
}
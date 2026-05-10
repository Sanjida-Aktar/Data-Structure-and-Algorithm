#include<iostream>

using namespace std;
int main(){
     pair<int,int>p= {2,5};
     cout<<"first element: "<<p.first<<endl;
     cout<<"second element: "<< p.second<<endl;

     cout<<"swap element: "<<endl;
     p.swap(p);
     cout<<p.first<<endl;
     cout<<p.second<<endl;
    return 0;
}
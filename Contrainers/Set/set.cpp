#include<iostream>
#include<set>
using namespace std;

//duplocate value insert hoina 
// determind size without duplicate value
int main(){
     set<int>s={1,5,1,5,2,9,4,3};
     for(int it: s){
        cout<<it<<" ";
     }
    //  cout<<s.lower_bound(5)<<endl;
    //  cout<<s.upper_bound(5)<<endl;

    return 0;
}
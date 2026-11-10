#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_set<string> l;
    while(n--){
        string s;string c;
        cin>>s>>c;
        
        if(s=="insert"){
            l.insert(c);
        }
        else if(s=="find"){
            if(l.count(c)>0){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}
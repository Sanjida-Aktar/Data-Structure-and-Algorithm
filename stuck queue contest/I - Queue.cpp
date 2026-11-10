#include<bits/stdc++.h>
using namespace std;
class Process{
    public:
    string name;
    int time;
};
int main(){
     int n, q_time;
    cin>>n>>q_time;
    Process p[n];
    for(int i=0; i<n; i++){
        
        cin>>p[i].name>>p[i].time;
    }
    stable_sort(p, p+n, [](const Process& a, const Process& b){
        return a.time < b.time;
    }); 
    for(int i=0; i<n; i++){
        cout<<p[i].name<<" "<<p[i].time<<endl;
    }
    return 0;
}
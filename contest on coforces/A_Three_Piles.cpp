#include<bits/stdc++.h>
using namespace std;
void  solve(int a,int b,int c){
    if(a==b || b==c){
        cout<<"NO"<<endl;
    }
    
   else if(a>b && b>c){
        if(a-b==1 && b-c==1 && a-c>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(b>a && a>c){
        if(b-a==1 && a-c==1 && b-c>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(c>b && b>a){
        if(c-b==1 && b-a==1 && c-a>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
int main(){
     int t;
     cin>>t;
     while(t--){
          int a,b,c;
          cin>>a>>b>>c;
          solve(a,b,c);
     }
    return 0;
}
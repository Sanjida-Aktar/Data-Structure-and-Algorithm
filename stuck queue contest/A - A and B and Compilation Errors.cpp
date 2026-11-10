#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> st, int arr[], int n){
    
    while (!st.empty())
    {
        
    int x= st.top();
    st.pop();
    bool found=false;
    for(int i=0;i<n-1;i++){
        if(arr[i]==x){
            found=true;
            break;
        }
        
    }
     if(found==false){
            cout<<x<<endl;
            return ;
        }
    
}
}
int main(){
     int n;
    cin>>n;
    stack<int> st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }

    int a[n-1];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    solve(st,a,n);
   stack<int> st2;
   for(int i=0;i<n-1;i++){
        st2.push(a[i]);
    }
    int a2[n-2];
    for(int i=0;i<n-2;i++){
        cin>>a2[i];
    }
    solve(st2,a2,n-1);


    return 0;
}
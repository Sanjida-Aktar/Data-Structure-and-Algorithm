#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<int> h(n);
            for(int i=0;i<n;i++){
                cin>>h[i];
            }
            int left=0,right=n-1;
            int mx=0,ansl=0,ansr=0;
            while(left<right){
                int water=(right-left)*min(h[left],h[right]);
                if(water>mx){
                    mx=water;
                    ansl=left;
                    ansr=right;
                }
                if(h[left]<h[right]){
                    left++;
                }
                else{
                    right--;
                }
            }
            cout<<ansl<<" "<<ansr<<endl;
        }
    return 0;
}
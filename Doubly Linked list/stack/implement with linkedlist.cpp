#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:
    list<int>l;

    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_front();
    }
    int top(){
        l.back();
    }
    bool empty(){
        l.empty();
    }
}
int main(){
     myStack st;
     st.push(15);
     if(!st.empty())
     cout<<st.top;
    return 0;
}
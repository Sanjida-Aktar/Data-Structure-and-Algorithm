#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:
    list<int>l;

    void push(int val){
        return l.push_back(val);
    }
    void pop(){
        return l.pop_front();
    }
    int top(){
        return l.back();
    }
    bool empty(){
       return l.empty();
    }
};
int main(){
     myStack st;
     st.push(15);
     st.push(50);
     if(!st.empty())
     {
     cout<<st.top();
    }
    return 0;
}
#include<iostream>
using namespace std;

class Node{
    public:
    Node* next;
    int data;
    
    Node(int data){
        this->data= data;
        this->next= NULL;
    }
    
};
void insert(int data){
    Node* newNode = new Node(data);
    
}

int main(){
     
    return 0;
}
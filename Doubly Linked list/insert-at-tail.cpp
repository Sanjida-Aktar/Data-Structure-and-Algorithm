#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_forword(Node* head)
     {
        Node* temp=  head;
        while (temp!= NULL)
        {
            cout<<temp->val<<" ";
            temp= temp->next;
        }
        cout<<endl;
     }
     void insertAtTail(Node* &tail, int val){
        Node* newNode = new Node(val);
        tail->next= newNode;
        newNode->prev= tail;
        tail= newNode;
     }

int main(){
     Node*head = new Node(10);
    Node* a= new Node(20);
    Node *tail = new Node(30);

    head->next= a;
    a->prev= head;

    a->next=tail;
    tail->prev= a;
    insertAtTail(tail, 50);
    print_forword(head);
    return 0;
}
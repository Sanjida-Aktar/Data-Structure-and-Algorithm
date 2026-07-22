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
     void insertAtPosition(Node* head, int val, int pos){
        Node* newNode = new Node(val);
        Node* temp= head;
       for(int i=1; i<pos; i++)
        {
            temp= temp->next;
        }
        
        

        newNode->next= temp->next;
        temp->next->prev= newNode;

        newNode->prev= temp;
        temp->next= newNode;
        
     }

int main(){
    Node*head = new Node(10);
    Node* a= new Node(20);
    Node *tail = new Node(30);

    head->next= a;
    a->prev= head;

    a->next=tail;
    tail->prev= a;

    insertAtPosition(head,2, 100);
    print_forword(head);
    return 0;
}
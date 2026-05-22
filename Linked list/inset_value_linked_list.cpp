#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* head = NULL; // global head pointer

void insertAtBegin(int data) {
    Node* newNode = new Node(data);
    newNode->next = head; // link new node to old head
    head = newNode;       // update head
}

void printList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    insertAtBegin(10);
    insertAtBegin(20);
    insertAtBegin(30);

    printList(); // Output: 30 -> 20 -> 10 -> NULL

    return 0;
}

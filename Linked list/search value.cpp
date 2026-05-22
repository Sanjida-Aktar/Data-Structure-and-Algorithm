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

Node* head = NULL; // লিস্টের শুরু

void insertAtBegin(int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void printList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool searchValue(int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return true; // ভ্যালু পাওয়া গেছে
        }
        temp = temp->next;
    }
    return false; // ভ্যালু পাওয়া যায়নি
}

int main() {
    insertAtBegin(10);
    insertAtBegin(20);
    insertAtBegin(30);

    printList(); // Output: 30 -> 20 -> 10 -> NULL

    int key = 20;
    if (searchValue(key)) {
        cout << key << " পাওয়া গেছে!" << endl;
    } else {
        cout << key << " পাওয়া যায়নি!" << endl;
    }

    return 0;
}

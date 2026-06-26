#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail= newNode;
}

void delete_at_position(Node *&head, Node *&tail, int pos)
{
    if(head == NULL)
    {
        return;
    }

    if(pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if(head == NULL)
        {
            tail = NULL;
        }
        return;
    }

    Node *temp = head;

    for(int i = 1; i < pos; i++)
    {
        if(temp == NULL)
        {
            return;
        }

        temp = temp->next;
    }

    if(temp == NULL || temp->next == NULL)
    {
        return;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;

    if(deleteNode == tail)
    {
        tail = temp;
    }

    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while(q--)
    {
        int x, v;
        cin >> x >> v;

        if(x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if(x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if(x == 2)
        {
            delete_at_position(head, tail, v);
        }

        print_linked_list(head);
    }

    return 0;
}

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

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void search_value(Node *head, int search)
{
    Node *temp = head;
    int count = 0;
    bool found = 0;

    while(temp != NULL)
    {
        if(temp->val == search)
        {
            found = 1;
            break;
        }

        temp = temp->next;
        count++;
    }

    if(found == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << count << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;

        while(true)
        {
            cin >> val;

            if(val == -1)
            {
                break;
            }

            insert_at_tail(head, tail, val);
        }

        int search;
        cin >> search;

        search_value(head, search);
    }

    return 0;
}

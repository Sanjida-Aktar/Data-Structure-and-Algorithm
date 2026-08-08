#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int size = 0;

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    size++;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (tail == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    size++;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    newNode->prev = tmp;

    tmp->next->prev = newNode;
    tmp->next = newNode;

    size++;
}

void print_left(Node *head)
{
    cout << "L -> ";

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_right(Node *tail)
{
    cout << "R -> ";

    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x < 0 || x > size)
        {
            cout << "Invalid" << endl;
            continue;
        }

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == size)
        {
            insert_at_tail(head, tail, v);
        }
        else
        {
            insert_at_position(head, x, v);
        }

        print_left(head);
        print_right(tail);
    }

    return 0;
}
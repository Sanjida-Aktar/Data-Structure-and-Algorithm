#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void input_tree(Node* &root)
{
    int val;
    cin >> val;

    if (val == -1)
    {
        root = NULL;
        return;
    }

    root = new Node(val);

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        int leftVal, rightVal;
        cin >> leftVal >> rightVal;

        if (leftVal != -1)
        {
            temp->left = new Node(leftVal);
            q.push(temp->left);
        }

        if (rightVal != -1)
        {
            temp->right = new Node(rightVal);
            q.push(temp->right);
        }
    }
}

int arr[1000];
int index = 0;

void print_leaf_nodes(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        arr[index++] = root->val;
        return;
    }

    print_leaf_nodes(root->left);
    print_leaf_nodes(root->right);
}

int main()
{
    Node* root = NULL;

    input_tree(root);

    print_leaf_nodes(root);

    sort(arr, arr + index, greater<int>());

    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
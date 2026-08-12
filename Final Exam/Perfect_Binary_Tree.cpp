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

Node* input_tree()
{
    int val;
    cin >> val;

    if (val == -1)
    {
        return NULL;
    }

    Node* root = new Node(val);

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

    return root;
}

void check_perfect_binary_tree(Node* root, int level, int &leafLevel, bool &isPerfect)
{
    if (root == NULL)
    {
        return;
    }

    // Leaf node
    if (root->left == NULL && root->right == NULL)
    {
        if (leafLevel == -1)
        {
            leafLevel = level;
        }
        else if (leafLevel != level)
        {
            isPerfect = false;
        }

        return;
    }

    if (root->left == NULL || root->right == NULL)
    {
        isPerfect = false;
        return;
    }

    check_perfect_binary_tree(root->left, level + 1, leafLevel, isPerfect);
    check_perfect_binary_tree(root->right, level + 1, leafLevel, isPerfect);
}

int main()
{
    Node* root = input_tree();

    bool isPerfect = true;
    int leafLevel = -1;

    check_perfect_binary_tree(root, 0, leafLevel, isPerfect);

    if (isPerfect)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
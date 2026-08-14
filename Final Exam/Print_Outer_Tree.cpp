#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_tree(){
    int val;
    cin>>val;
    if(val == -1) return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        int leftVal, rightVal;
        cin>>leftVal>>rightVal;

        if(leftVal != -1){
            temp->left = new Node(leftVal);
            q.push(temp->left);
        }

        if(rightVal != -1){
            temp->right = new Node(rightVal);
            q.push(temp->right);
        }
    }
    return root;
}

bool isLeaf(Node* root)
{
    return root->left == NULL && root->right == NULL;
}

void left_boundary(Node* root, vector<int>& ans)
{
    if(root == NULL)
        return;

    if(isLeaf(root))
    {
        ans.push_back(root->val);
        return;
    }

    if(root->left != NULL)
    {
        left_boundary(root->left, ans);
    }
    else
    {
        left_boundary(root->right, ans);
    }

    ans.push_back(root->val);
}


void right_boundary(Node* root, vector<int>& ans)
{
    if(root == NULL)
        return;

    ans.push_back(root->val);

    if(isLeaf(root))
        return;

    if(root->right != NULL)
    {
        right_boundary(root->right, ans);
    }
    else
    {
        right_boundary(root->left, ans);
    }
}


int main()
{
    Node* root = input_tree();

    if(root == NULL)
        return 0;

    vector<int> ans;
    if(isLeaf(root))
    {
        cout << root->val << " ";
        return 0;
    }
    if(root->left == NULL)
    {
        right_boundary(root, ans);
    }
    else if(root->right == NULL)
    {
        left_boundary(root, ans);
    }
    else
    {
        left_boundary(root->left, ans);

        ans.push_back(root->val);
        right_boundary(root->right, ans);
    }

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}
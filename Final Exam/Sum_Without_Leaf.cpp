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
void input_tree(Node* &root){
    int val;
    cin>>val;
    if(val==-1){
        root = NULL;
        return;
    }
    root = new Node(val);
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        int leftVal, rightVal;
        cin>>leftVal>>rightVal;
        if(leftVal!=-1){
            temp->left = new Node(leftVal);
            q.push(temp->left);
        }
        if(rightVal!=-1){
            temp->right = new Node(rightVal);
            q.push(temp->right);
        }
    }
}

int sum_without_leaves(Node* root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 0;
    }
    int leftSum = sum_without_leaves(root->left);
    int rightSum = sum_without_leaves(root->right);
    return root->val + leftSum + rightSum;
}

int main(){
    Node* root = NULL;
    input_tree(root);
    cout << sum_without_leaves(root) << endl;
    return 0;
}
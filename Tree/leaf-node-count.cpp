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
        Node* p = q.front();
        q.pop();
        int left_val, right_val;
        cin>>left_val>>right_val;
        if(left_val==-1){
            p->left = NULL;
        }
        else{
            p->left = new Node(left_val);
            q.push(p->left);
        }
        if(right_val==-1){
            p->right = NULL;
        }
        else{
            p->right = new Node(right_val);
            q.push(p->right);
        }
    }
    return root;
}
int count_leaf_nodes(Node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) 
    return 1;
    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    return l + r;
}
int main(){
    Node* root = input_tree();
    int leaf_count = count_leaf_nodes(root);
    cout << leaf_count << endl;
    return 0;
}
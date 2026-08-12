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
void level_nodes_print(Node* root, int L){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);
    int level = 0;
if(L < 0){
        cout<<"Invalid"<<endl;
        return;
    }
    while(!q.empty()){
        int size = q.size();
        
        if(level == L){
            for(int i=0; i<size; i++){
                Node* temp = q.front();
                q.pop();
                cout<<temp->val<<" ";
            }
            cout<<endl;
            return;
        }
        for(int i=0; i<size; i++){
            Node* temp = q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        level++;

    }
    
        cout<<"Invalid"<<endl;
    
}

int main(){
    Node* root = input_tree();
    int L;
    cin>>L;
    level_nodes_print(root, L);

     
    return 0;
}
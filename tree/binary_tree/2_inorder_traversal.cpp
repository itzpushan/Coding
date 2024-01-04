#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

void inorderTraversal(Node* root){
    if(root==NULL)
        return;
    inorderTraversal(root->left);
    cout << root->data <<" ";
    inorderTraversal(root->right);   
}

int main(){

    class Node* root = new Node(17);
    root->left= new Node(3);
    root->right= new Node(7);
    root->left->left = new Node(43);
    root->left->right = new Node(38);
    root->right->right = new Node(82);

    cout << "The inorder traversal results in:" << endl;
    inorderTraversal(root);
    cout << endl;

    return 0;
}
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


int main(){

    class Node* root = new Node(17);
    root->left= new Node(3);
    root->right= new Node(7);

    delete root->left;
    delete root->right;
    delete root; 



    return 0;
}
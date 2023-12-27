#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            data = 0;
            next = NULL;
        }

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class LinkedList{
    public:
        Node* head;

        LinkedList(){
            head = NULL;
        }

        void insertNodeAtLast(int);
        void traversal();
        void deleteNodeAtPosition(int);

};

void LinkedList::insertNodeAtLast(int data){
    Node* newNode = new Node(data);

    if (head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

void LinkedList::traversal(){
    Node* temp = head;

    if(head == NULL){
        cout << "The list is empty.\n";
        return;
    }

    cout << "The list contains the elements:\n";

    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}

void LinkedList::deleteNodeAtPosition(int position){
    Node* temp = head;

    int currentPosition = 1;

    if(head->next != NULL){
        if(position==1){
            head = head->next;
            return;
        }
        else{
            while (temp->next != NULL)
            {
                if (currentPosition == position-1)
                {
                    temp->next = temp->next->next; 
                    return;  
                }
                currentPosition++;
                temp = temp->next;
            }   
        }

        cout << "The given position is out of scope of deletion.\n";   
    }  
}



int main(){

    LinkedList list;
    list.insertNodeAtLast(1);
    list.insertNodeAtLast(2);
    list.insertNodeAtLast(3);
    list.insertNodeAtLast(4);
    list.insertNodeAtLast(5);
    list.traversal();
    list.deleteNodeAtPosition(3);
    list.traversal();
    list.deleteNodeAtPosition(5);
    list.traversal();


    return 0;
}


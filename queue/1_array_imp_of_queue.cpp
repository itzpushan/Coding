#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Queue{
    public:
        int front,rear;
        int a[MAX];

        Queue(){
            front=rear=0;
        }

        void enQueue(int data);
        void deQueue();
        void printQueue();
        void printFront();
};

void Queue::enQueue(int data){
    if(rear==MAX){
        cout << "Queue is already full.\n";
    }
    else{
        a[rear++]=data;
    }
}

void Queue::deQueue(){
    if(front==rear){
        cout << "Queue is empty.\n";
    }
    else{
        cout << "The element  dequeued is: " << a[front] << endl; 
        front++; 
    }
}

void Queue::printQueue(){
    if(front==rear){
        cout << "Queue is empty.\n";
    }
    else{
        cout << "The queue contains:\n";
        for (int i = front; i < rear; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;    
    }  
}

void Queue::printFront(){
    if(front==rear){
        cout << "Queue is empty.\n";
    }
    else{
        cout << "The front element is:" << a[front] << endl;
    }
}




int main(){

    Queue q;
    q.enQueue(20);
    q.enQueue(90);
    q.enQueue(4675);
    q.printQueue();
    q.printFront();
    q.deQueue();
    q.printQueue();

    return 0;
}
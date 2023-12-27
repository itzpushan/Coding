#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack{
    int top;

    public:
        int a[MAX];
        Stack(){
            int top = -1;
        }

        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
};

bool Stack::push(int x){
    if(top >= (MAX-1)){
        cout << "Stack overflow\n";
        return false;
    }
    else{
        a[++top]=x;
        cout << x << " pushed into the stack.\n";
        return true;
    }
}

int Stack::pop(){
    if(top < 0){
        cout << "Stack underflow.\n"; 
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}

int Stack::peek(){
    if(top<0){
        cout << "Stack is empty";
        return 0;
    }
    else{
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty(){
    return (top<0);
}



int main(){
    Stack s;
    s.push(23);
    s.push(68);
    s.push(97);
    s.push(30);
    s.push(06);

    cout << s.pop() << " popped from the stack.\n";
    cout << "the top element is " << s.peek() <<endl;
    
    cout << "The traversal of stack results in :" << endl;
    while (!s.isEmpty())
    {
        cout << s.peek() <<" ";
        s.pop(); 
    }
     
    return 0;
}
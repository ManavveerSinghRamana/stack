//Tarandeep Singh (1024240086)
#include <iostream>
using namespace std;

#define MAX 100
int stack[MAX];
int top=-1;

void push(int x){
    if(top==MAX-1){
        cout<<"Stack Overflow"<<endl;
    } else {
        stack[++top]=x;
        cout<<x<<" pushed into stack"<<endl;
    }
}

void pop(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
    } else {
        cout<<stack[top]<<" popped from stack"<<endl;
        top--;
    }
}

void isEmpty(){
    if(top==-1)
        cout<<"Stack is Empty"<<endl;
    else
        cout<<"Stack is not Empty"<<endl;
}

void isFull(){
    if(top==MAX-1)
        cout<<"Stack is Full"<<endl;
    else
        cout<<"Stack is not Full"<<endl;
}

void peek(){
    if(top==-1)
        cout<<"Stack is Empty"<<endl;
    else
        cout<<"Top element is: "<<stack[top]<<endl;
}

void display(){
    if(top==-1){
        cout<<"Stack is Empty"<<endl;
    } else {
        cout<<"Stack elements: ";
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int choice,val;
    do {
        cout<<"\n--- Stack Menu ---\n";
        cout<<"1. Push\n2. Pop\n3. isEmpty\n4. isFull\n5. Peek\n6. Display\n7. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){
            case 1: cout<<"Enter value: "; cin>>val; push(val); break;
            case 2: pop(); break;
            case 3: isEmpty(); break;
            case 4: isFull(); break;
            case 5: peek(); break;
            case 6: display(); break;
            case 7: cout<<"Exiting..."<<endl; break;
            default: cout<<"Invalid choice"<<endl;
        }
    } while(choice!=7);

    return 0;
}


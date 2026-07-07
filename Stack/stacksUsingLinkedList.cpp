#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    //constructor
    Node(int n){
        data = n;
        next = nullptr;
    }
};    


class stack{
    Node* top;
    public:
    stack(){
        top = nullptr;
    }

    //push (insert at head)
    void push(int n){
        Node* newNode = new Node(n);
        newNode->next = top;
        top = newNode;

    }

    //pop (delete the head)
    void pop(){
        if(top == nullptr){
            cout<<"stack underflow"<<"\n";
        }
        Node* temp = top;
        top = top -> next;
        delete temp;
    }

    //peek
    void peek(){
        if(top == nullptr){
            cout<<"stack underflow"<<"\n";
        }
        cout<<"The topmost element is : "<<top->data;
    }

    //display
    void display(){
         if(top == nullptr){
            cout<<"stack is empty"<<"\n";
        }
        Node* temp = top;
        while(temp!=0){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"null";
    }

    //deconstructor 
    ~stack(){
        while(top!=nullptr){
            pop();
        }
    }
};

int main() 
{
    stack st;
    st.push(10);
    st.push(12);
    st.push(32);
    st.push(9);
    st.push(14);
    st.push(22);
    st.display();
    cout<<"\n";
    st.peek();
    cout<<"\n";

    st.pop();
    st.peek();
    return 0;
}
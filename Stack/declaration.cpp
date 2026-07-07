#include <iostream>
using namespace std;

class stack{
    int*arr, capacity , top;
public:
//costructor
    stack(int size){
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    //pushing into stack 
    void push(int p){
    if(top == capacity -1){
        cout<<"stack overflow."<<"\n";
        return;
    }
    arr[++top] = p;
}

    //display the stack 
    void display(){
        if(top == -1) {cout<<"satck is empty"<<"\n";
        return;
        }
        cout<<"stack elements : "<<"\n";
        for(int i=top; i>=0;i--){
            cout<<arr[i]<<"\n";
        }
    }

    //delete from the stack
    void pop(){
        if(top == -1){
            cout<<" can't delete, stack underflow "<<'\n';
            return;
        }
        top--;
    }

    //peek
    void peek(){
        if(top == -1){
            cout<<"stack is empty"<<"\n";
            return;
        }
        cout<<"The topmost element of stack is : "<<arr[top];
    }
 
    ~stack() {
        delete[] arr;
    }

};



int main() 
{
    stack st(5);
    st.push(4);   
    st.push(9);   
    st.push(13);   
    st.push(15);   

    st.display();
    // st.pop();
    // st.display();
st.peek();

    return 0;
}
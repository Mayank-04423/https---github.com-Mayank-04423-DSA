#include<iostream>
#include<queue>
using namespace std;

class myStack{
    queue<int> q; //our queue

    public:

    void push(int x){
    int current_size = q.size();
    q.push(x);

    //rotate the elements
    for(int i = 0;i< current_size; i++){
        q.push(q.front());  //take front element and push it to back
        q.pop();    //remove it 
    }
    }

    int pop(){
        int top_element = q.front();
        q.pop();
        return top_element;
    }

    int top(){
        return q.front();
    }

    bool isEmpty(){
        return q.empty();
    }


};


int main(){

}
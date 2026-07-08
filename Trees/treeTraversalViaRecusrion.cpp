#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* lchild;
  Node* rchild;  
};

void preOrder(Node* p){
    if(p!= nullptr){
        cout<<p->data<<" "; //root
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}

void inOrder(Node* p){
    if(p!= nullptr){
        inOrder(p->lchild);
        cout<<p->data<<" "; //root
        inOrder(p->rchild);
    }
}


void postOrder(Node* p){
    if(p!= nullptr){
        postOrder(p->lchild);
        postOrder(p->rchild);
        cout<<p->data<<" ";
    }
}

int main() 
{
    
    return 0;
}
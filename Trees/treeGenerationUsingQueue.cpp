#include <iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* lchild;
    Node* rchild;
};

Node* root = nullptr;

void createTree(){
    Node* p, *t;
    int x;
    queue<Node*> q; //out tracking queue

    //root node
    cout << "Enter root value: ";
    cin >> x;
    root=new Node{x,nullptr,nullptr};
    q.push(root);

    //to attach child nodes
    while(!q.empty()){
        p = q.front();
        q.pop();

        //left child
        cout << "Enter left child of " << p->data << " (-1 for none): ";
        cin >> x;
        if(x!= -1){
            t = new Node{x,nullptr,nullptr};
            p->lchild=t;
            q.push(t);
        }

        //right child
        cout << "Enter right child of " << p->data << " (-1 for none): ";
        cin >> x;
        if(x!= -1){
            t = new Node{x,nullptr,nullptr};
            p->rchild=t;
            q.push(t);
        }
    }

}

int main() 
{
    createTree();
    return 0;
}
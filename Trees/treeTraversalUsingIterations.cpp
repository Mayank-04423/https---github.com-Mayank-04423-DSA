#include <iostream>
#include<stack>
using namespace std;

struct Node{
    int data;
    Node* lchild;
    Node* rchild;
};

void iterativePreOrder(Node* root){
    if(root!= nullptr) return;

    stack<Node*>st;
    st.push(root);

    while(!st.empty()){
        Node* curr = st.top();
        st.pop();

        cout<<curr->data;   //processing root/current node

        if(curr->rchild!= nullptr){
            st.push(curr->rchild);
        }
        if(curr->lchild!= nullptr){
            st.push(curr->lchild);
        }

    }
    
}

int main() 
{
    
    return 0;
}
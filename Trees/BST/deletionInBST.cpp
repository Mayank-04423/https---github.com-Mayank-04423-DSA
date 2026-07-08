#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* lchild;
    Node* rchild;
};

class BST{

    public:
    //in-order successor
    Node* minValueNode(Node* node){
        Node* current = node;
        while(current && current->lchild!= nullptr){
            current = current->lchild;
        }
        return current;
    }

    Node* deleteNode(Node* root, int key){
        if(root == nullptr) return root;

        if(key< root->data){
            root->lchild = deleteNode(root->lchild,key);   
        }else if(key > root->data){
            root->rchild = deleteNode(root->rchild,key);
        }
        else{
            if(root->lchild==nullptr){
                Node* temp = root->rchild;
                delete root;
                return temp;
            }else if(root->rchild == nullptr){
                Node* temp = root->lchild;
                delete root;
                return temp;
            }
        

        //node has 2 children ->preorder successor assign kro(lowest in right)
        Node* temp = minValueNode(root->rchild);
        root->data = temp->data;
        //delete it
        root->rchild = deleteNode(root->rchild,temp->data);
        
    }
    return root;

    }
};

int main() 
{
    
    return 0;
}
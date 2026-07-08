#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* lchild;
    Node* rchild;
};

class BST{
    Node* root;
    public:
        BST(){root = nullptr;};
        //2 pointer approach p-> points to parent t-> search for null spot
        void insert(int x){
            Node* p = root;
            Node*t = nullptr;   //follower pointer

            //1. create new node if tree is empty
            if(root == nullptr){
                root = new Node{x,nullptr,nullptr};
                return;
            }
            //2. searching tree to find right insertion spot 
            while(p!=nullptr){
                t=p;
                if(x < p->data){
                    p=p->lchild;    //move left if smaller
                }else if(x> p->data){
                    p= p->rchild;   //move right if bigger
                }else{
                    return;
                }
            }

            //3. t is at leaf parent node so link the new node
            Node* new_node = new Node{x,nullptr,nullptr};
            if(x<t->data){
                t->lchild=new_node;
            }else {
                t->rchild=new_node;
            }
        }

        void inOrder(Node* curr){
            if(curr!=nullptr){
                inOrder(curr->lchild);
                cout<<curr->data<<" ";
                inOrder(curr->rchild);
            }
        }

        Node* getroot(){
            return root;
        }    
};

int main() 
{
    BST tree;
    tree.insert(30);
    tree.insert(15);
    tree.insert(50);
    tree.insert(10);
    tree.insert(20);

    tree.inOrder(tree.getroot());
    return 0;
}
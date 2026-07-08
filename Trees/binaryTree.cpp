#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* lchild;
    Node* rchild;
};

Node* root = new Node{10,nullptr,nullptr};
Node* lchild = new Node{5,nullptr,nullptr};
Node* rchild = new Node{20,nullptr,nullptr};

int main() 
{
    
    return 0;
}
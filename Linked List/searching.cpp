#include <iostream>
using namespace std;

//declaration 
struct Node{
    int data;
    Node*next ;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* first = nullptr;
//creating first node using 'new'
void create(int A[],int n){
    first= new Node(A[0]);
    Node* last = first;
    
    for(int i=1; i<n;i++){
        Node* t = new Node(A[i]);
        last -> next = t;   //linking to new node 
        last = t;           //moving the tracker forward
    }
}

//display
void display (struct Node* p){
    while(p!=nullptr){
        cout<<p->data<<"->";
        p = p->next;
    }
    cout<<"NULL";
}

//searching 

struct Node* Lsearch(struct Node*p,int key)
{
    struct Node* q;

    while(p!=NULL)
    {   
        if(key ==p->data)
       {
        //to move the resultant node to front 
        q->next = p->next;
        p->next = first;
        first = p;
        return p;
       }
        q=p;
        p=p->next;
    }
    return NULL;
}

Node* Rsearch(struct Node*p , int key){
    if(p==NULL)
    return NULL;
    if(key==p->data) return p;
    return Rsearch(p->next,key);
}


int main() 
{
    int A[]={2,16,8,4,40,5};
    create(A,6);
    
    struct Node* temp;
    temp = Lsearch(first,8);
    if(temp) cout<<"key is found :"<<temp->data<<"\n";
    else cout<<"key not found";

    display(first);

    return 0;
}
#include <iostream>
using namespace std;

//declaration 
struct Node{
    int data;
    Node*next ;
    //constuctor to create node and assign next ptr with data
    Node(int val,Node*nextptr = nullptr){
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

//insertion of element
void insert(int pos, int x){
    if(pos == 0){
        first =  new Node(x,first);
        return;
    }

    //anywhere else 
    Node* p = first;
    for(int i=0; i<pos-1; i++){
        p = p->next;
    } 

    if(p){
        p->next = new Node(x,p->next);
    }
}

Node* Rsearch(struct Node*p , int key){
    if(p==NULL)
    return NULL;
    if(key==p->data) return p;
    return Rsearch(p->next,key);
}


int main() 
{
    // int A[]={2,16,8,4,40,5};
    // create(A,6);
    
    // struct Node* temp;
    // temp = Lsearch(first,8);
    // if(temp) cout<<"key is found :"<<temp->data<<"\n";
    // else cout<<"key not found";

    insert(0,5);
    insert(2,8);

    display(first);

    return 0;
}
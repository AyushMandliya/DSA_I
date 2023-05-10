#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
}*first=NULL;

void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first =(struct Node*)malloc (sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=(struct Node*)malloc (sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    } 
    
}

void Display(struct Node*p){
    while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
}
}
void RDisplay(struct Node*p){
    if(p!=NULL){
        cout<<p->data<<" ";
        RDisplay(p->next);
    }
}

struct Node* LinearSearch(struct Node *p,int key){
    while(p!=0){
        if(key==p->data)
        return p;
        p=p->next;
    }    
    return NULL;
}

struct Node* RSearch(struct Node* p,int key){
    if(p==NULL)
    return NULL;
    if(key==p->data)
    return p;
    return RSearch(p->next,key);
}

int main(){
    Node*temp;
    int A[]={3,5,7,10,15};
    create(A,5);
    //Display(first);
    //RDisplay(first);
    /*temp=LinearSearch(first,10);
    if(temp)
    cout<<"key is found "<<temp->data;
    else 
    cout<<"key is'nt present";*/
    temp=RSearch(first,10);
    if(temp)
    cout<<"key is found "<<temp->data;
    else 
    cout<<"key is'nt present";
return 0;
}
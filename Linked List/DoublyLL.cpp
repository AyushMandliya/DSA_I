#include<iostream>
using namespace std;

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;

void Create(int A[],int n){
    struct Node*t,*last;
    int i;
    first= (struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->prev=first->next=NULL;
    last=first;

    for ( i = 1; i < n; i++)
    {
       t=(struct Node*)malloc(sizeof(struct Node)); 
       t->data=A[i];
       t->next=last->next;
       t->prev=last;
       last->next=t;
       last=t;
    }
}

void Display(struct Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int Length(struct Node *p){
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}

int main(){
    int A[]={1,2,3,4,5};
    Create(A,5 );
    cout<<"Length is "<< Length(first)<<" "<<endl;
    Display(first);
return 0;
}
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

int count(struct Node *p){
    int l=0;
    while(p){
    l++;
    p= p->next;
    }
    return l;

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

void Insert(struct Node * p,int index ,int x){
    int i;
    struct Node* t;
    if(index<0 || index>count(p))
    return;
    t=(struct Node* )malloc(sizeof(struct Node));
    t->data=x;

    if(index==0){
        t->next=first;
        first=t;
    }
    else {
        for(int i=0;i<index-1;i++)
        p=p->next;
        t->next=p->next;
        p->next=t;
    }
}

int main(){
    /*Node*temp;
    int A[]={3,5,7};
    create(A,3);
    //Insert(first,0,10);
    //Insert(first,2,10);
    //Insert(first,8,10);
    Insert(first,3,10);
    Display(first);
    //Display(first);
    //RDisplay(first);
   */
   Insert(first,0,10);
   Insert(first,1,20);
   Insert(first,2,30);
   Insert(first,0,5);
   Display(first);
return 0;
} 
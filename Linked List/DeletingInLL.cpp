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

void SortedInsert(struct Node * p,int x){
    struct Node *t ,*q=NULL;
    t=(struct Node*)malloc (sizeof(struct Node ));
    t->data = x;
    t->next=NULL;

    if(first == NULL)
    first=t;
    else {
        while (p && p->data <x){
            q=p;
            p=p->next; 
        }
        if(p==first){
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }
}

int Delete (struct Node* p , int index){
    struct Node *q=NULL;
    int x =-1,i;
    if(index<1 || index> count(p))
    return -1;
    else 
    if(index==1 ){
        x=first->data;
        first=first->next;
        delete q;
        return x;

    }
    else {
            for(i=0;i<index-1;i++)
            {
                q=p;
                p=p->next;
            }
            q->next=p->next;
            x=p->data;
            delete p;
            return x;
    }
}

int main(){
    int A[]={10,20,30,40,50};
    create(A,5);
    //Delete(first,1);
    //Delete(first,5);
    cout<<"Deleted element is "<<Delete(first,4)<<endl;
    Display(first);
    cout<<endl;
return 0;
} 
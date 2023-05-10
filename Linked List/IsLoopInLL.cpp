#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
}*first=NULL,*second=NULL,*third=NULL;

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
void create2(int A[],int n){
    int i;
    struct Node *t,*last;
    second =(struct Node*)malloc (sizeof(struct Node));
    second->data=A[0];
    second->next=NULL;
    last=second;
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

int IsSorted(struct Node *p){
    int x=INT32_MIN;
    while(p!=NULL){
        if(p->data<x)
        return false ;
        else 
        x=p->data;
        p=p->next;
    }
    return 1;
}

void RemoveDuplicate(struct Node *p){
        struct Node*q=p->next;
        while(q!=NULL){
            if(p->data!=q->data){
                p=q;
                q=q->next;
            }
            else{
                p->next=q->next;
                delete q;
                q=p->next;
            }
        }
}

void Reverse1(struct Node *p ){
    int *A,i=0;
    struct Node *q=p;
    A= (int *)malloc(sizeof(int)*count(p));
    while(q!=NULL){
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL){
        q->data=A[i];
        q=q->next;
        i--;
    }
}

void Reverse2(struct Node *p){
    struct Node*q=NULL,*r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void Reverse3(struct Node *q,struct Node *p){
    if(p){
        Reverse3(p,p->next);
        p->next=q;
    }
    else 
    first = q;
}
void Concat(struct Node *p,struct Node *q){
    third = p ;
    while(p->next!=NULL)
    p=p->next;
    p->next=q;
}
void Merge(struct Node *p,struct Node*q){
    struct Node *last;
    if(p->data<q->data){
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q ){
        if(p->data < q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
    else{
             last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p) last->next=p;
    if(q) last->next=q;
}

int IsLoop(struct Node *f){
    struct Node*p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }
    while(p && q && p!=q);
    if(p==q)
    return 1;
    else 
    return 0;
}

int main(){
    struct Node *t1,*t2;
    int A[]={10,20,30,40,50};
    create(A,5);
    
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
    cout<<IsLoop(first);
return 0;
} 
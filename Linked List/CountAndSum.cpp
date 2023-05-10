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

int count(struct Node *p){
    int l=0;
    while(p){
    l++;
    p= p->next;
    }
    return l;

}
int Rcount(struct Node *p){
    if(p!=NULL)
    return Rcount(p->next)+1;
    else return 0;
}

int Sum(struct Node *p){
    int s=0;
    while (p!=0){
        s=s+p->data;
        p=p->next;
    }
    return s;
}

int RSum(struct Node *p){
    if (p==NULL)
        return 0;
        else
         return RSum(p->next)+p->data;
}

int main(){
    int A[]={3,5,7,10,15};
    create(A,5);
    //Display(first);
    //RDisplay(first);
    cout<<"length is "<<count(first);
    //cout<<"length is "<<Rcount(first);
    //cout<<"sum is "<<Sum(first);
    cout<<"sum is "<<RSum(first);
   
return 0;
}
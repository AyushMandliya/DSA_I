#include<iostream>
using namespace std;
//circular linked list 

struct Node{
    int data;
    struct Node *next;
}*Head;

void Create(int A[],int n){
    int i;
    struct Node *t,*last;
    Head=(struct Node*)malloc(sizeof(struct Node));
    Head->data=A[0];
    Head->next=Head;
    last=Head;

for ( i = 1; i < n; i++)
{
  t=(struct Node*)malloc(sizeof(struct Node));
  t->data=A[i];
  t->next=last->next;
  last->next=t;
  last=t;
    }
}

void Display(struct Node *h){
    do{
        cout<<h->data<<" ";
        h=h->next;

    }
    while(h!=Head);
    cout<<endl;
}

void RDisplay(struct Node *h){
    static int flag=0;

    00000000000000000000000000000000000000000000000000
    if(h!=Head || flag==0){
        flag=1;
        cout<<h->data<<" ";
        RDisplay(h->next);
    }
    flag=0;
}

int main(){
    int A[]={2,3,4,5,6};
    Create(A,5);
   // Display(Head);
    RDisplay(Head);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct Array{
    int A[20];
    int size; 
    int length;
};
void display(struct Array arr){
    int i;
    printf("Elements are = ");
    for ( i = 0; i < arr.length; i++)
    {
    printf(" %d ",arr.A[i]);
    }
}

void Insert(struct Array *arr,int index,int x){
    int i;
    if(index>=0 && index <= arr->length){
        for (i = arr->length; i >index; i--)
          arr->A[i]=arr->A[i-1];
          arr->A[index]=x;
          arr->length++;
    }
}

int main(){
    struct Array arr={{2,3,4,5,6},10,5};
    Insert(&arr,0,10);
    display(arr);
return 0;
}
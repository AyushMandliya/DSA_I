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
/*
int Linearsearch(struct Array arr,int key){
    int i;
    for(i=0;i<arr.length;i++){
        if(key==arr.A[i])
        return i;
    }
    return -1;
}
int main(){
    struct Array arr={{2,3,4,5,6},10,5};
   printf("%d\n",Linearsearch(arr,4));
   printf("%d\n",Linearsearch(arr,15));  
    display(arr);
return 0;
}*/
void swap(int *x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int Linearsearch(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i])
        {
            swap(&arr->A[i],&arr->A[0]);//swap(&arr->A[i],&arr->A[i-1])
                return i;
    }
    }
    return -1;
}

int main(){
    struct Array arr={{2,3,4,5,6},10,5};
   printf("%d\n",Linearsearch(&arr,5));
   printf("%d\n",Linearsearch(&arr,15));  
    display(arr);
return 0;
}
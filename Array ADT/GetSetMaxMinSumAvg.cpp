#include<iostream>
using namespace std;
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
int Get(struct Array arr,int index){
    if(index>=0 && index<arr.length)
    return arr.A[index];
    return -1;
}
void Set(struct Array *arr,int index,int x){
    if(index>=0 && index<arr->length)
    arr->A[index]=x;
}
int Max(struct Array arr){
    int Max=arr.A[0];
    int i;
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>Max)
        Max=arr.A[i];
    }
    return Max;
}
int Min(struct Array arr){
    int Min=arr.A[0];
    int i;
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<Min)
        Min=arr.A[i];
    }
    return Min;
}
int Sum(struct Array arr){
    int s=0;
    int i;
    for(int i=0;i<arr.length;i++)
    s+=arr.A[i];
    return s ;
}
float Avg(struct Array arr){
    return (float)Sum(arr)/arr.length;
}
int main(){
    struct Array arr={{2,3,4,5,6},10,5};
  
  printf("%d\n",Get(arr,9));
  printf("%d\n",Get(arr,3));
  Set(&arr,0,8);
  printf("%d\n",Max(arr));
  printf("%d\n",Min(arr));
  printf("%d\n",Sum(arr));
  printf("%f\n",Avg(arr));
 
 

    display(arr);
return 0;
}
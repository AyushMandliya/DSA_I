#include <iostream>
using namespace std;
//reverse an array
    void reverse(int arr[],int n){
        int start = 0;
        int end = n-1;
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    void printarray(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
            cout<<endl;
    }

int main(){
    int arr[6]={3,8,5,-7,9,11};
    int brr[5]={6,2,9,10,4};
    reverse(arr,6);
    reverse(brr,5);
    cout<<"the reverse of arr[6] is : ";
    printarray(arr,6);
    cout<<"the reverse of arr[5] is : ";
    printarray(brr,5);
    return 0;
}
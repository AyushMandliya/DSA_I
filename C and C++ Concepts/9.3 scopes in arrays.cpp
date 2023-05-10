#include <iostream>
using namespace std;

   /* void update(int arr[],int n){
        cout<<"inside the function"<<endl;
        arr[0]=120;
         for(int i=0;i<3;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
        cout<<"going back to main function"<<endl;
    }
int main(){
        int arr[3]={1,2,3};
        update(arr,3);
        cout<<"printing in the main function"<<endl;
        for(int i=0;i<3;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;*/
        int sumarr(int arr[],int n){
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=arr[i];
            }
            return sum;
        }
        int main(){
            int a[100],n;
            cout<<"enter the value of n" <<endl;
            cin>>n;
            for(int i=0;i<n;i++){
                cin >>a[i];
            }
            cout<<"the sum of all the elements in the array is "<<sumarr(a,n)<<endl;
    return 0;
}
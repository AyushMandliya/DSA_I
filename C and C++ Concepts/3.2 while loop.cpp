#include <iostream>

using namespace std;
//while loop
int main()
{
    /*int n;     //numbers till n
    cin>>n;
    int i=1;
    
    while(i<=n){
    cout<<i<<" ";
    i=i+1;  
    }*/
   /* int n;     //sum of numbers
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
    sum=sum+i;
    i=i+1;  
    }
       cout<<sum<<" ";*/
    /*int n;        //sum of even numbers
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n){
    sum=sum+i;
    i=i+2;  
    }
       cout<<sum<<" ";*/
    /*int n;
    cin>>n;
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
        }
        else
        {cout<<"prime"<<endl;}
        i=i+1;
    }*/
   /* int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }*/
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}
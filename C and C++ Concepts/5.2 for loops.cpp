#include <iostream>

using namespace std;

int main()
{
    //for loop
   /* int  n;
    cout<<"enter the value of n = ";
    cin>>n;
    cout<<"printing the count from 1 to n"<<endl;*/
    /* for(int i=1;i<=n;i++)   //initialization condition updation
    cout<<i<<endl;
   */
   /* int i=1;
    for(;;)  { //initialization condition updation   
    if(i<=n){
            cout<<i<<endl;
    }
    else 
    break;
    i++;
    }*/
   /* for(int a=0,b=1,c=2;a>=0 && b>=0&& c>=2;a--,b--,c--){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }*/
   /* int n;
    cout<<"enter the value of n"<<endl;
    cin>>n; int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;*/
  /*  //fibonacci series
    int n=10;
    int a=0;
    int b=1;
    for(int i=0;i<=n;i++){
        int nextnumber=a+b;
        cout<<nextnumber<<" ";
        a=b;b=nextnumber;
    }*/
    //prime or not
    /*int n;
    cout<<"enter the value of n = ";
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
        isprime=0;
        break;
        }
    }
    if(isprime==0){
        cout<<"not a prime number"<<endl;
    }
    else{
        cout<<"is a prime number";
        }*/
   /* for(int i=0;i<5;i++){
        cout<<"hii"<<endl;
        cout<<"hey"<<endl;
        continue;
        cout<<"aree reply to karde ";
    }*/
   /* for(int i=0;i<=5;i++){
        cout<<i<<endl;
        i++;
    }*/
   /* for(int i=0;i<=15;i+=2){
        cout<<i<<endl;
    if (i&1){
        continue;
    }
    i++;
    }*/
   /* for(int i=0;i<=5;i--){
        cout<<i<<endl;
        i++;
    }*/
   /* for(int i=0;i<5;i++){  
    for(int j=i;j<=5;j++){
        if (i+j==5){
            break;
        }
    cout<<i<<" "<<j<<endl;
    }
    }*/
    for(int i=0;i<5;i++){  
    for(int j=i;j<=5;j++){
        if (i+j==10){
            break;
        }
    cout<<i<<" "<<j<<endl;
    }
}
}
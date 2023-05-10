#include <iostream>

using namespace std;

int main()
{
    //switch case
  /*  int num=1;
    char ch='1';
    cout<<endl;
    switch(ch){
        case 1: cout<<"first";
                cout<<"first again";
                  break;
        case '1': switch(num){
        case 1:cout<<"value of num is "<<num;
        break;
    }
        break;
        default: cout<<"this is default case";
    }
        cout<<endl;*/
   /* //********************calculator***************************
   int a,b;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    char op;
    cout<<"enter the operation you want to perform"<<endl;
    cin>>op;
    
    switch(op){
        case '+': cout<<(a+b)<<endl; break;
        case '-': cout<<(a-b)<<endl; break;
        case '*': cout<<(a*b)<<endl; break;
        case '/': cout<<(a/b)<<endl; break;
        case '%': cout<<(a%b)<<endl; break;
        default:
        cout<<"please enter the valid operation"<<endl;
    }*/
    //money notes required
       int amount;
       cout<<"enter the amount"<<endl;
       cin>>amount;
       int rs100,rs50,rs1,rs20;
       switch(1){
       case(1):
       rs100=amount/100;
       amount=amount%100;
       cout<<"number of 100 rs note required ="<<rs100<<endl;
       case(2):
       rs50=amount/50;
       amount=amount%100;
       cout<<"number of 50 rs note required ="<<rs50<<endl; 
       case(3):
       rs20=amount/20;
       amount=amount%20;
       cout<<"number of 20 rs note required ="<<rs20<<endl; 
       case(4):
       rs1=amount/1;
       amount=amount%1;
       cout<<"number of 1 rs note required ="<<rs1<<endl;
   }
    return 0;
}
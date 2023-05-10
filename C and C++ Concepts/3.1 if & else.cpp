#include <iostream>

using namespace std;

int main()
{ 
    /*int a,b;
      cin>>a>>b;   // cin is'nt read space,tab,enter.   
    if(a>b)
    {
        cout<<"a is greater ";
    }
    else
    {
        cout<<"b is greater";
    }*/
   /*int a
    a=cin.get();      //ASCAII wala code
    cout<<"the value of a is "<<a<<endl;
    */
    int a;
    cout<<"enter the value of a = "<<endl;
    cin>>a;
    if(a>0)
    {
        cout<<"the number is positive";
    }
    else if(a<0)
    {
        cout<<"the number is negative";
    }
    else
        cout<<"the number is 0";
    return 0;
}
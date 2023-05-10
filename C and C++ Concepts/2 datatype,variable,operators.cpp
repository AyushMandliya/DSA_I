#include <iostream>

using namespace std;

int main()
{
    cout<<"Namaste Duniya"<<endl;
    cout<<"I am ayush mandliya \n";
    bool bl=true;
    cout<<"bl="<<bl<<endl;
    float f=1.3;
    cout<<"f="<<endl;
    cout<<"size of float is "<<sizeof(f)<<endl;
    double d=1.23;
    cout <<"d="<<d<<endl;
    cout<<"size of double is "<<sizeof(d)<<endl;
    char ch='v';
    cout<<"ch="<<ch<<endl;
    cout<<"size of char is "<<sizeof(ch)<<endl;
    int a=5; //4 byte
    cout<<"a="<<a<<endl;
    cout<<"size of int  a "<<sizeof(a)<<endl;
    int b='b';      //typecasting
    cout<<b<<endl;
    char c=99;
    cout<<c<<endl;
    unsigned int x=112;
    cout<<x<<endl;
    cout<<2/5<<endl;
    cout<<2.0/5<<endl;
    cout<<2.08/5<<endl;
    int m=9;
    int n=8;
    cout<<(m==n)<<endl;
    cout<<(m>=n)<<endl;
    cout<<(m<=n)<<endl;
    cout<<(m!=n)<<endl;
return 0;
    // '<<' used to write the standerd output.      
    // '\n' is the newline character.
    //1 byte   ,,,,// bool b= true or false / 1 or 0,,,, / ,,, /  took 8 byte
}
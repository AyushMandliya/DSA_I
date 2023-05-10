#include<iostream>
using namespace std;
int main(){
    int *p=new int[5];
    p[0]=2;p[1]=5;p[2]=3;p[3]=7;p[4]=6;
    int *q=new int[10];
    for (int i = 0; i < 5; i++)
    q[i]=p[i];
    delete []p;
    p=q;
    q=NULL;
    for (int i = 0; i < 5; i++)
    cout<<p[i]<<endl;

return 0;
}
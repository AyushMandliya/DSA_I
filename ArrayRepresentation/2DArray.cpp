#include<iostream>
using namespace std;
int main(){
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};    //stack
    int *B[3];  //stack
    int **C;    //heap
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 4; j++)
    {
    cout<<A[i][j]<<endl;
    }
    }
    
    B[0]=new int [4];   //heap
    B[1]=new int [4];
    B[2]=new int [4];
    B[0][1]=5;
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 4; j++)
    {
    cout<<B[i][j]<<endl;
    }
    }
    C=new int *[3]; //heap
    C[0]=new int [4];   
    C[1]=new int [4];
    C[2]=new int [4];
     for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 4; j++)
    {
    cout<<C[i][j]<<endl;
    }
    }
return 0;
}
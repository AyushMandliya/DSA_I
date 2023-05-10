#include <iostream>

using namespace std;

int main()
{
    /*int n;
    cin>>n;
    int i=1;
    while (i<=n){
    int j=1;
    while (j<=n)
    {
    cout<<j;            //cout<<n-j+1;
    j+=1;
    }
    cout<<endl;
    i+=1;
    }*/
  /* int n;
    cin>>n;
    int i=1;
    int count=1;
    while (i<=n){
    int j=1;
    while (j<=n)
    {
        cout<<count<<" ";            //cout<<n-j+1;
        count+=1;
        j+=1;
    }
        cout<<endl;
        i+=1;
    }*/
    /* int n;
    cin>>n;
    int row=1;
    while (row<=n){
    int column=1;
    while (column<=row)
    {
        cout<<" *";            
        column+=1;
    }
        cout<<endl;
        row+=1;
    }*/
    /*int n;
    cin>>n;
    int row=1;
    while (row<=n){
    int column=1;
    while (column<=row)
    {
        cout<<row;            
        column+=1;
    }
        cout<<endl;
        row+=1;
    }*/
    /*int n;
    cin>>n;
    int row=1;
    while (row<=n){
    int column=1;
    int value=row;
    while (column<=row)
    {
        cout<<value;
        value=value+1;
        column+=1;
    }
        cout<<endl;
        row+=1;
    }*/
    /*int n;
    cin>>n;
    int row=1;
    while (row<=n){
    int column=1;
    while (column<=row)
    {
        cout<<row-column+1;            
        column+=1;
    }
        cout<<endl;
        row+=1;
    }*/
    /*int n;
    cin>>n;
    int row=1;
    while (row<=n){
    int column=1;
    while (column<=n)
    {
        char ch='A'+row-1;  //char ch='A'+column-1;
        cout<<ch;            
        column+=1;
    }
        cout<<endl;
        row+=1;
    }*/
    /*int n;
    cin>>n;
    int row=1;
    while (row<=n){
    int column=1;
    while (column<=n)
    {
        char ch='A'+row-1;  //char ch='A'+column-1;  //char ch='A'+column+row-2;
        cout<<ch;            
        column+=1;
    }
        cout<<endl;
        row+=1;
    }*/
    /*int n;
    cin>>n;
    int row=1;
    while (row<=n){
    int column=1;
    char start='A'+n-row;
    while (column<=row)
    {
        cout<<start;            
        start+=1;
        column+=1;
    }
        cout<<endl;
        row+=1;
    }*/
    /*int n;
    cin>>n;
    int row=1;
    while (row<=n){
    int space=n-row;
    while (space)
    {
        cout<<" ";            
        space-=1;
    }
    int column=1;
    while(column<=row){
        cout<<"*";
        column+=1;
    }
        cout<<endl;
        row+=1;
    }*/
    int n;
    cin>>n;
    int row=1;
    while (row<=n){
    int space=n-row;
    while (space)
    {
        cout<<" ";            
        space-=1;
    }
    int column=1;
    while(column<=row){
        cout<<column;
        column+=1;
    }
    int start=row-1;
    while(start){
        cout<<start;
        start-=1;
    }
        cout<<endl;
        row+=1;
    }
    return 0;
}
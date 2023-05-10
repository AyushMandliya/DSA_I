#include<iostream>
using namespace std;
/*int main() {
    // pow(a,b)
    int a , b;
    cin >> a >> b;
    int ans = 1;
    for(int i = 1; i<=b; i++) {
        ans = ans * a;
    }
    cout<<" answer is " << ans <<endl;
    int c , d;
    cin >> c >> d;
    ans = 1;
    for(int i = 1; i<=d; i++) {
        ans = ans * c;
    }
    cout<<" answer is " << ans <<endl;
    int e , f;
    cin >> e >> f;
    ans = 1;
    for(int i = 1; i<=f; i++) {
        ans = ans * e;
    }
    cout<<" answer is " << ans <<endl;*/
/*int power(int num1, int num2) {
    //cout << a <<endl;
    int ans = 1;
    for(int i = 1; i <= num2; i++) {
        ans = ans * num1;
    }
    return ans;
}
int main()
{
     int a , b;
    cin>> a >> b;
    int answer = power(a,b);
    cout << " answer is " << answer << endl;
    int c , d;
    cin>> c >> d;
    answer = power(c,d);
    cout << " answer is " << answer << endl;
    return 0;
}*/
/*void printCounting(int num) {
//    cout << n << endl;
    //Function Body 
    for(int i=1; i<=num; i++) {
        cout<< i << " ";
    }
    cout<<endl;
}
int main() {
    int n;
    cin >> n;
    //function Call
    printCounting(n);
    return 0;
}*/
/*//1 -> Even
// 0 -> odd
bool isEven(int a) {
    //odd
    if(a&1) {
        return 0;
    }
    else { //Even
        return 1;
    }
}
int main() {
    int num;
    cout<<"enter the number";
    cin >> num;
    if(isEven(num)) {
        cout <<" Number is Even" <<endl;
    }
    else {
        cout<< " Number is Odd" <<endl;
    }
        return 0;
}*/
/*// 0 -> Not a Prime no.
// 1 -> Prime no.
bool isPrime(int n ) {
   for(int i = 2; i < n; i++){
       if(n % i == 0) {
       //divide hogya h , not a prime no.
          return 0;
        }
   }
   return 1;
}
int main() {
   int n ;
   cout<<"enter the number";
   cin >> n;
   if(isPrime(n)) {
        cout <<" is a Prime number " <<endl;
   }
   else{
       cout<< "Not a prime number "<<endl;
   }
}*/

//ncr
/*#include <iostream>

using namespace std;
int factorial (int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r){
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
     return num/denom;
   
}

int main()
{
    int n,r;
    cout<<"enter the value of n and r";
    cin>>n>>r;
    
    cout<<"answer is "<<ncr(n,r)<<endl;
    return 0;
}*/
/*//A.P
int AP(int n){
    int ap=3*n+7;
    return ap;
}
int main(){
    int n;
    cin>>n;
    int ans=AP(n);
    cout<<"answer is"<<ans<<endl;
}*/
/* //fibonacci
int fibonacci(int n){
    int a=0;
    int b=1;
    for(int i=2;i<n;i++){
        int next=a+b;
        a=b;
        b=next;
    }
    return b;
}
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    cout<<"the "<<n<<"th term of the AP series is "<<fibonacci(n)<<endl; 
}*/
/*// setbits
int setbitsB(int b){
    int count=0;
    while(b!=0){
        if(b&1){
            count++;
        }
        b=b>>1;
    }
    return count;
}
int setbitsA(int a){
    int count=0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a=a>>1;
    }
    return count;
}
int main(){
    int a,b;
    cout<<"enter the value of a and b =";
    cin>>a>>b;
    int ans1=setbitsA(a);
    int ans2=setbitsB(b);
    cout<<"setbits of A"<<ans1<<endl;
    cout<<"setbits of b"<<ans2<<endl;
    int ans=ans1+ans2;
    cout<<"total set bits of A and B are ="<<ans <<endl;
}*/
/*void dummy(int n ) {  //pass by value
    n++;
    cout << " n is " << n <<endl;
}
int main() {
    int n;
    cin >> n;
    dummy(n);
    cout<<"number n is "<< n << endl;
    return 0;
}*/
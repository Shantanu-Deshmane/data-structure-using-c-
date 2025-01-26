#include <iostream>
using namespace std;
int main(){
    int a,b;
    // 20,17
    cout<<"Enter a first number: ";
    cin>>a;
    cout<<"Enter a second number: ";
    cin>>b;

    cout<<"Number before swapping: a="<<a<<" b="<<b;
    // c=3
    int c=a-b;
    // b=20
    b=c+b;
    a=b-c;
    cout<<"\nNumbers after swapping: a="<<a<<" b="<<b;
    

}
#include <iostream>
using namespace std;

void palindrome(int num){
    int res=0;
    int temp=num;
    int a;
    while(num!=0){
        a=num%10;
        res=res*10+a;
        num=num/10;
    }

    if(temp==res){
        cout<<"Entered number is Palindrome";
    }else{
        cout<<"Entered number is Not Palindrome";
    }
}


int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    palindrome(num);
    return 0;
}
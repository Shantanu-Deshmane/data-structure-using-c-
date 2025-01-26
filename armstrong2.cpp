#include <iostream>
using namespace std;
int main(){
    int num,temp,temp_len;
    int a=0;
    int sum=1;
    int res=0;
    int length=0;
    cout<<"Enter a number: ";
    cin>>num;
    temp=num;

    // calculate length
    while (temp!=0){
        length++;
        temp=temp/10;
    }
    temp=num;
    temp_len=length;

    // separate each digit from number
    while(temp!=0){
        a=temp%10;

        // calculate power of separated digit
        while(length!=0){
            sum=sum*a;
            length--;
        }
        temp=temp/10;
        res=res+sum;
        sum=1;
        length=temp_len;
        
    }
    if(num==res){
        cout<<"Entered number is Armstrong!";
    }else{
        cout<<"entered number is Not Armstrong!";
    }
    return 0;
}
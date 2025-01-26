#include <iostream>

using namespace std;

int main(){
    int a,b,temp,t_len;
    int length=0;
    int res=1;
    int sum=0;

    // find the length of entered number
    cout<<"Enter a number: ";
    cin >> a;
    temp=a;
    while(temp!=0){
        length++;
        temp=temp/10;
    }
    temp=a;
    t_len=length;
    
    // separate each digit from number
    while(temp!=0){
        b=temp%10;

        //Find the power of each digit 
        while(t_len!=0){
            res=res*b;
            t_len--;
        }
        // cout <<"temp: " <<temp<<"\n";
        // cout <<"b: " <<b<<"\n";
        // cout <<"res: " <<res<<"\n";
        temp=temp/10;
        sum+=res;
        t_len=length;
        res=1;
    }

    if(sum==a){
        cout<<"Number is Armstrong!!";
    }else{
        cout<<"Number is Not Armstrong!!";
    }
    return 0;
}
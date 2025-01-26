#include <iostream>
using namespace std;

int main(){
    int num;
    bool flag=true;

    cout<<"Enter a number: ";
    cin>>num;

    if (num==0 || num==1){
        flag=false;
    }

    for (int i=2; i<=num/2; i++){
        if(num%i==0){
            flag=false;
        }
    }
    if(flag){
        cout<<num<<"  is Prime";
    }else{
        cout<<num<<"  is Not Prime";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter a first number";
    cin>>a;
    cout<<"Enter a Second number";
    cin>>b;
    cout<<"Enter a Third number";
    cin>>c;

    if (a>b & a>c){
        cout<<a<<" is large than other";
    }
    else if(b>a & b>c){
        cout<<b<<" is large than other";
    }else{
        cout<<c<<" is large then other";
    }
    return 0;
}
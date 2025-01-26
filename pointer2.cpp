#include <iostream>
using namespace std;
int main(){
    int a=7;
    int* ptr=&a;

    cout<<"size of int: "<<sizeof(a);
    cout<<"\n"<<"Before increment: "<<ptr<<"\n";
    ptr++;
    cout<<"After increment: "<<ptr<<"\n";
    cout<<"After increment: "<<a<<"\n";

    ptr--;
    cout<<"After decrement: "<<ptr;
    return 0;
}
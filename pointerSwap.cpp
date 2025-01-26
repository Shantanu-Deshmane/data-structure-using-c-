#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int c = *a;
    *a=*b;
    *b=c;
}


int main(){
    int a=10;
    int b=50;
    cout<<"Values before swapping: a= "<<a<<" b= "<<b<<"\n";

// Call the swap fnc and Passing the address od a and b
    swap(&a,&b);
    cout<<"Values After swapping: a= "<<a<<" b= "<<b;
    return 0;
}
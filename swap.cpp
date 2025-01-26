#include <iostream>
using namespace std;

void swap(int x, int y){
    int z= x;
    x=y;
    y=z;
    cout<<"Numbers after swapping: "<<"x= "<<x<<"y= "<<y;
}

int main(){
    int x=10;
    int y=13;
    cout<<"Numbers before swapping: "<<"x= "<<x<<"y= "<<y<<"\n";
    swap(x,y);
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int a;
    int length=0;
    cout<< "enter a number: ";
    cin >> a;
    
    while(a!=0){
        a=a/10;
        length ++;
        // cout <<"Length is: " <<a;

    }
    cout <<"Length is: " <<length;
    return 0;
}
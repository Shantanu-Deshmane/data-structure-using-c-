#include <iostream>
using namespace std;

int main(){
    int num; 
    int fact=1; 
    cout << "Enter a number: ";
    cin >> num;

    if(num < 0){
        cout << "Enter a positive number";
    }else{
        for(int i=1; i<=num;i++){
            fact=fact*i;
        }
        cout <<"Factorial is: "<<fact;
    }
    return 0;
}
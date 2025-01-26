#include <iostream>
using namespace std;

// void test(string name, int age){
//     cout<<name<<" is "<<age<<" years old!";
// }

// function with return value
int add(int x, int y){
    return x+y;
}

int main(){
    // test("Shantanu",20);
    int res= add(3,2);
    cout<<"Addition is: "<<res;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
  int a=10;
  int* ptr=&a;

  cout<<&a;
  cout<<"\n"<<a<<"\n";
  cout<<ptr;
  return 0;
}
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a num: ";
    cin>>num;

    switch (num){
          
        default :
            cout<<"Orange";
            break;

        case 1:
            cout<<"Red";
            break;
        
        case 2 :
            cout<<"Green";
            break;
        
        case 3 :
            cout<<"pink";
            break;
        
        case 4 :
            cout<<"Yellow";
            break;
      
        
    }
    return 0;
}
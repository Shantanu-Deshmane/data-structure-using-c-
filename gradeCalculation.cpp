#include <iostream>
using namespace std;

int main()
{
    int mark;
    cout << "Enter a percentage: ";
    cin >>mark;

    if (mark>90){
        cout << "Excellent";
    }
    else if (mark>70){
        cout << "Great";
    }
    else if (mark>50){
        cout << "Good";
    }
    else if (mark>35){
        cout << "average";
    }
    else{
        cout << "Need to study more";

    }

    return 0;
}
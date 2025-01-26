#include <iostream>
using namespace std;

int main(){
    int total_inp;
    int sum=0;
    cout<<"Enter a number of subjects: ";
    cin>>total_inp;
    int sub[total_inp];
    
    for(int i=0; i!=total_inp; i++){
        cout<<"Enter marks for subject "<<i+1<<": ";
        cin>>sub[i];
    }

    // for(int n:sub){
    //     cout<<n<<", ";
    // }
    cout<<"Emtered marks are: ";
    for(int i=0; i<total_inp; i++){
        sum+=sub[i];
    }
    cout<<"total marks is : "<<sum<<" Out of "<<total_inp*100;
    cout<<"\nPercentage: "<<sum/total_inp;
    return 0;

}
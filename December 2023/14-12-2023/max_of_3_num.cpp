#include<iostream>
using namespace std;

int main(){
    
    // Create a program to find maximum of three numbers.

    int n1,n2,n3;
    cout<<"Enter 3 numbers: ";
    cin>>n1>>n2>>n3;

    if (n1>n2){

        if (n1>n3){
            cout<<n1;
        } else{
            cout<<n3;
        }
    
    } else{

        if (n3>n1){
            cout<<n3;
        } else{
            cout<<n2;
        }
        
    }
    

    return 0;
}

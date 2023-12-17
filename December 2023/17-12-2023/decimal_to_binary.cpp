#include<iostream>
using namespace std;

//Program to convert a natural decimal number to binary number.

int main(){
    
    int num;
    cout<<"Enter a decimal number: ";
    cin>>num;

    while (num>0)
    {
        cout<<num%2<<" ";
        num/=2;
    }
    cout<<"\n<--Just read right to left--";
    

    return 0;
}

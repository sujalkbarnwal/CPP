#include<iostream>
using namespace std;

//Program a function to convert an decimal number to binary.

int decimalToBinary(int n){
    int ans = 0;
    int x = 1;
    while (x <= n){
        x *= 2;
    }
    x/=2;

    while (x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=2;
        ans = ans*10 + lastDigit;
    }
    
    return ans;
}

int main(){
    
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;

    cout<<"Binary conversion: "<<decimalToBinary(n)<<endl;

    return 0;
}

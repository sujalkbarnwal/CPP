#include<iostream>
using namespace std;

//Program a function to convert an decimal number to octal.

int decimalToOctal(int n){
    int ans = 0;
    int x = 1;
    while (x <= n){
        x *= 8;
    }
    x/=8;

    while (x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=8;
        ans = ans*10 + lastDigit;
    }
    
    return ans;
}

int main(){
    
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;

    cout<<"Octal conversion: "<<decimalToOctal(n)<<endl;

    return 0;
}

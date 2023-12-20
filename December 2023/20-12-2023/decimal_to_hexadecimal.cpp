#include<iostream>
using namespace std;

//Program a function to convert an decimal number to hexadecimal.

int decimalToHexadecmial(int n){
    int ans = 0;
    int x = 1;
    while (x <= n){
        x *= 16;
    }
    x/=16;

    while (x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=16;
        ans = ans*10 + lastDigit;
    }
    
    return ans;
}

int main(){
    
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;

    cout<<"Hexadecimal conversion: "<<decimalToHexadecmial(n)<<endl;

    return 0;
}

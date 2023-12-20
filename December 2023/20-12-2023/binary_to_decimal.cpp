#include<iostream>
using namespace std;

//Program a function to convert an binary number to decimal.

int binaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    while (n>0){
        int y = n%10;
        ans += x*y;
        x *= 2;
        n/=10;
    }
    return ans;
}

int main(){
    
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;

    cout<<"Decimal conversion: "<<binaryToDecimal(n)<<endl;

    return 0;
}

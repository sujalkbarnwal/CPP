#include<iostream>
using namespace std;

//Program a function to convert an octal number to decimal.

int octalToDecimal(int n){
    int ans=0;
    int x=1;
    while (n>0){
        int y=n%10;
        ans += x*y;
        x*=8;
        n/=10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter an octal number: ";
    cin>>n;

    cout<<"Decimal conversion: "<<octalToDecimal(n)<<endl;

    return 0;
}

#include<iostream>
using namespace std;

//Write a program to check if a given number is prime or not.

int main()
{
    
    int n, i;
    cout<<"Enter a number: ";
    cin>>n;

    for (i=2; i<n; i++)
    {
        if (n%i == 0){
            cout<<"Non Prime";
            break;
        }
    }
    
    if (i==n)
    {
        cout<<"Prime";
    }
    

    return 0;
}

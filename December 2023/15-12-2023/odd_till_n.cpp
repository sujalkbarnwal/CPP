#include<iostream>
using namespace std;

//Write a program to print all odd numbers till n.

int main()
{
    
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    
    for (int i = 0; i<=n; i++)
    {
        if (i%2 == 0){
            continue;
        }
        cout<<i<<endl;
    }
    

    return 0;
}

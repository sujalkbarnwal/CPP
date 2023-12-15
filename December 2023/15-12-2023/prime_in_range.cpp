#include<iostream>
using namespace std;

//Write a program to print all prime numbers in a given range.

int main()
{
    int n1,n2,i,j;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    for (i=n1; i<=n2; i++)
    {
        for (j=2; j<i; j++)
        {
            if (i%j == 0)
            {
                break; //number is not prime.
            }
        }

        if (j==i)
        {
            cout<<i<<endl; //loop has completed all iterations.
        }
        
        
    }
    
    return 0;
}

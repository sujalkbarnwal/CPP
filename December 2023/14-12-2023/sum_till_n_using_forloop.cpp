#include<iostream>
using namespace std;

int main()
{
    int n,sum;
    cin>>n;

    for (int counter=1; counter<=n; counter++)
    {
        sum += counter;
    }

    cout<<sum;
    
    return 0;
}

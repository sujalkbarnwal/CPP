#include<iostream>
using namespace std;

int main()
{


    int inp_num,sum;
    cout<<"Enter a number: ";
    cin>>inp_num;

    while (inp_num>0)
    {
        sum += inp_num;
    cout<<"Enter a number: ";

        cin>>inp_num;
    }
    
    cout<<"Sum is: "<<sum;

    return 0;
}
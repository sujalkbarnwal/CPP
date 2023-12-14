#include<iostream>
using namespace std;

int main()
{

    int inp_num;
    cin>>inp_num;

    do
    {
        cout<<inp_num<<endl;
        cin>>inp_num;
    } while (inp_num>0);

    return 0;
}
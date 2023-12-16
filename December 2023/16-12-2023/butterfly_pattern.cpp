#include<iostream>
using namespace std;

int main()
{
    
    int inp_num;
    cout<<"Enter a number to generate the pattern accordingly: ";
    cin>>inp_num;

    for (int i=1; i<=inp_num; i++){

        for (int j=1; j<=i; j++){
            cout<<" * ";
        }

        int space = 2*inp_num - 2*i;
        for (int j=1; j<=space; j++)
        {
            cout<<"   ";
        }

        for (int j=1; j<=i; j++){
            cout<<" * ";
        }
        

        cout<<endl;
    }
    
    for (int i=inp_num; i>=1; i--){

        for (int j=1; j<=i; j++){
            cout<<" * ";
        }

        int space = 2*inp_num - 2*i;
        for (int j=1; j<=space; j++)
        {
            cout<<"   ";
        }

        for (int j=1; j<=i; j++){
            cout<<" * ";
        }
        

        cout<<endl;
    }

    return 0;
}

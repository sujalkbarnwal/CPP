#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    // for (int i=row; i>=1; i--)
    // {
    //     for (int j=1; j<=i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    for (int i=1; i<=row; i++){
        for (int j=1; j<=row+1-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}

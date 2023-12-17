#include<iostream>
using namespace std;

int main(){
    
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    for (int i=1; i<=row; i++){
        for (int j=1; j<=row-i; j++)
        {
            cout<<"  ";
        }
        for (int j=i; j>=1; j--)
        {
            cout<<j<<" ";
        }
        for (int j=2; j<=i; j++)
        {
            cout<<j<<" ";

            // if (j>1){ //But first change j=1 in the for condition
            //     cout<<j<<" ";
            // } else{
            //     continue;
            // }
        }
        
        cout<<endl;
        
    }
    
    return 0;
}

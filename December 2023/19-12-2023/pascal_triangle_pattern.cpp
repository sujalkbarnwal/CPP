#include<iostream>
using namespace std;

int facto(int n){
    int result_factorial=1;
    for (int i=n; i>=1; i--){
        result_factorial*=i;
    }
    return result_factorial;
}

int nCr(int n,int r){
    int result_nCr= facto(n)/(facto((n-r)) * facto(r));
    return result_nCr;
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    for (int i=0; i<n; i++){
        for (int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}

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
    int n,r;
    cin>>n>>r;

    cout<<nCr(n,r);

    return 0;
}

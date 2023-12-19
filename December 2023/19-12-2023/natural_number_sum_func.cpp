#include<iostream>
using namespace std;

//Function to calculate the sum of first n natural numbers.
int n_sum(int n){
    int result = n*(n+1)/2;
    return result;
}

int main(){
    int n;
    cin>>n;

    cout<<n_sum(n);
    return 0;
}

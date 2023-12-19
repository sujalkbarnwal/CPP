#include<iostream>
using namespace std;

int facto(int n){
    int result=1;
    for (int i=n; i>=1; i--){
        result*=i;
    }
    return result;
}

int main(){
    int num;
    cin>>num;

    cout<<facto(num);

    return 0;
}

#include<iostream>
#include<climits>
using namespace std;

//Write a program to find max and min numbers within a user created integer array.

int main(){
    
    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int maxNum=INT_MIN;
    int minNum=INT_MAX;
    for (int i=0; i<n; i++){
        maxNum= max(maxNum,arr[i]);
        minNum= min(minNum,arr[i]); 
    }
    
    cout<<"Maximum number: "<<maxNum<<endl;
    cout<<"Minimum number: "<<minNum<<endl;

    return 0;
}

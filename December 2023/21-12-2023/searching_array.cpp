#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for (int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }

    return -1;
}

int main(){
    
    int n;
    cout<<"Enter size of integer array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" items of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter item to find key number: ";
    cin>>key;
    
    cout<<"Key number: "<<linearSearch(arr,n,key)<<endl;

    return 0;
}

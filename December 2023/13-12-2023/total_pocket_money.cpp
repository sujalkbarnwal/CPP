#include<iostream>
using namespace std;

int main(){

    //Objective: Finding sum of two numbers

    int amount_mom;
    cout<<"Amount given by mom: \n";
    cin>>amount_mom;

    int amount_dad;
    cout<<"Amount given by dad: \n";
    cin>>amount_dad;

    int total_amount = amount_mom + amount_dad;
    cout<<"Total pocket money is: "<<total_amount;

    return 0;
}
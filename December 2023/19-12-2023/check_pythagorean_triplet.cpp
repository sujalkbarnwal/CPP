#include<iostream>
#include<math.h>
using namespace std;

void check_pytriplet(int a,int b,int c){
    int x,y,z;
    if (a>b){
        if (a>c){
            x=a;
            y=b;
            z=c;
        } else{
            x=c;
            y=b;
            z=a;
        }
    } else{
        if (b>c){
            x=b;
            y=a;
            z=c;
        } else{
            x=c;
            y=b;
            z=a;
        }
    }
    if (pow(x,2) == (pow(y,2)+pow(z,2))){
        cout<<"Pythogorean Triplet";
    } else{
        cout<<"Not a Pythogorean Triplet";
    }
}

int main(){
    int a,b,c;
    cout<<"Enter three sides of the triangle: ";
    cin>>a>>b>>c;

    check_pytriplet(a,b,c);

    return 0;
}

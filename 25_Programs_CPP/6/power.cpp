#include <iostream>
using namespace std; 

int main(){
    int base, exponent,sum=1;
    
    cout<<"Enter base value : ";
    cin>>base;

    cout<<"Enter the power value : ";
    cin>>exponent;

    for(int i=1; i<=exponent; i++){
        sum=sum*base;
    }

    cout<<base<<"^"<<exponent<<"="<<sum;
}
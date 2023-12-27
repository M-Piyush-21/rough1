//Implement a program to print the multiplication table of a given number.
#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number of which multiplication should be runned: ";
    cin>>n;

    for(int i=1; i<=10; ){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    }
    return 0;
}
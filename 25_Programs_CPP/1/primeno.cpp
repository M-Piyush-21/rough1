//1. Implement a program to check if a given number is prime or not.
#include <iostream>
using namespace std;

int main(){
    int n, i=0; 

    cout<<"Enter a non-integer number: ";
    cin>>n;


    if( i<=n && n%2==0 ){
        if(n==0){
        cout<<"Zero is nor composite nor prime. "; 
        }
        else{
        cout<<"The number is not prime... It is a Composite number.  ";
        }
    }
    else if(n<i){
        cout<<"Please.... Enter a non-Interger number. ";
    }
    else 
    {
        cout<<"The number is prime. ";
    } 

    
 return 0;
    }

   
     

//Create a program to check if a given string is a palindrome.
#include <iostream>
#include <string>
using namespace std;

int main(){

    string input,check;
    int i=0,j;
    
    cout<<"Enter the string: ";
    cin>>input;

    check=input;
    j=input.length()-1;

    //Now reversing string. 
    while(i<j){
        swap(input[i],input[j]);
        i++;
        j--;}

    if(check==input){
        cout<<"The sting is palindrome.";
    }
    else{
        cout<<"The Given string is not palindrome. ";
    }



     

}
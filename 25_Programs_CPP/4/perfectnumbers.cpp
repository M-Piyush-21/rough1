#include<iostream>
using namespace std;
int main ()
{  
    int i, num, div, sum=0;
    cout << "Enter the number to be checked if it is perfect or not : ";
    cin >> num;

    for (i=1; i < num; i++)
    {
        div = num % i;
        if (div == 0)
            sum = sum + i;
    }

    if (sum == num)
        cout << num <<" is a perfect number.";
    else
        cout << num <<" is not a perfect number.";
        
    return 0;
}
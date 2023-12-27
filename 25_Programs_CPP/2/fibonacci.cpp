//2. Write a C++ program to display the Fibonacci sequence up to N terms.
#include <iostream>
using namespace std;

int main(){
    int t1=0,t2=1,nextterm=0,n;
    cout<<"Enter the number upto which series should run: ";
    cin>>n;

    cout<<"The Fibonacci sequence is ";

    for(int i=1; i<=n; ++i) {
        //These two are default values which will print in series... and after all the cal. will start. 
        if(i==1)
        {
            cout<<t1<<" , ";
            continue;
        }
        if(i==2){
            cout<<t2<<" , ";
            continue;
        }
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;

        cout<<nextterm<<" , ";

    }
        return 0;
}

    

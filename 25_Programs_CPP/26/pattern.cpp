#include <iostream>

using namespace std;

int main()
{
    int n , a , num;

    cout<<"Enter the no. of lines : ";
    cin>>n;

    for(int i = 1; i <= n ; i++){

        
        
        a = i+1;

        for(int j = n ; j > 0; j--){
            cout<<" ";
        }
        cout<<i;

        for(int k = i+1 ; k <= 2*i+1 ; k++){
            
            if(k <= 2*i){
                a++;
            }
            else{a--;}
            cout<<k;
        }


        cout<<i;
        cout<<"\n";
    }




    return 0;
}
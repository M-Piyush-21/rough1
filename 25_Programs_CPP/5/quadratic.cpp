#include<iostream>
#include<cmath>
using namespace std;
int main()
{

  float a,b,c,x1,x2,d,real,imaginary;

  cout<<"Quadratic Equation : ax^2 + bx + c"<<endl;
  cout<<"Enter coefficient of a : "<<endl;
  cin>>a;
  cout<<"Enter coefficient of b : "<<endl;
  cin>>b;
  cout<<"Enter coefficient of c : "<<endl;
  cin>>c;

//discriminant.
  d=b*b-4*a*c;

  if(d>0)
  {
    cout<<"Roots are real and distinct"<<endl;
    x1=(-b + sqrt(d)) / (2*a);
    x2=(-b - sqrt(d)) / (2*a);
    cout<<"x1 = "<<x1<<endl;
    cout<<"x2 = "<<x2<<endl;
  }
  else if(d==0)
  {
    cout<<"Roots are real and same"<<endl;
    x1=(-b + sqrt(d)) / (2*a);
    cout<<"x1 = "<<x1<<endl;
    cout<<"x2 = "<<x1<<endl;
  }
  else
  {
    cout<<"Roots are complex and distinct"<<endl;
    real = -b/(2*a);
    imaginary = sqrt(-d) / (2*a);
    cout<<"x1 = "<<real<<"+"<<imaginary<<"i"<<endl;
    cout<<"x2 = "<<real<<"-"<<imaginary<<"i"<<endl;
  }
  return 0;
}
#include<iostream>
using namespace std;
int main()
{
   int a,b,sum;
   char opr;
    cout<<"Enter two no.\n";
    cin>>a>>b;
    cout<<"Enter an oprator(+,-,*,/) ";
    cin>>opr;

    switch (opr)
    {
    case '+':
        sum=a+b;
        cout<<"Addition ="<<sum;
        break;
    case '-':
        sum=a-b;
        cout<<"Subtraction ="<<sum;
        break; 
    case '*':
        sum=a*b;
        cout<<"Mul ="<<sum;       
        break; 
    case '/':
        sum=a/b;
        cout<<"Div ="<<sum;
        break; 
    
    default:
    cout<<"Invalid oprator";
        break;
    }

}
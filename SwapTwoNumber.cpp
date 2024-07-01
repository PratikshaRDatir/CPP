#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter two no.\n";
    cin>>a>>b;
    cout<<"Before swap a="<<a<<" b="<<b;
    //Swapping the two no.
    temp=a;
    a=b;
    b=temp;
    cout<<"\nAfter swap a="<<a<<" b="<<b;
    }
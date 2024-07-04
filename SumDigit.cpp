/*2: Write a program to Accept a number and display its sum of digits.:ex 568    5+6+8 */
#include<iostream>
using namespace std;
int main()
{
    int a,n,sum=0;
    cout<<"Enter any value "<<endl;
    cin>> n;
   while(n>0)
    {
      a=n%10;
     // cout<<a<<"+";
      sum=sum+a;
      n=n/10;
    }
    cout<<"sum="<<sum;
}
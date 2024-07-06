/*4:. Write a  program to print all Prime numbers between 1 to n. */

#include<iostream>
using namespace std;
int main()
{
    int i ,n,flag;
    cout<<"Enter the no.";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
          cout<<n<<"is not prime no.";
          flag=1;
        }   
    }  
    if(flag==0)
        {
          cout<<n<<" is a prime no.";   
        }     
}
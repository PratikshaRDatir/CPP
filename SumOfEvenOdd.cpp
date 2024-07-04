/*3:. Write a  program to find sum of all even and odd numbers between 1 to n. */
#include<iostream>
using namespace std;
int main()
{
    int i,even=0,odd=0;
    
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        {
           even= even+i;
        }
        else
        {
           odd=odd+i;
        }   
    }
    cout<<"Sum Of Even Number ="<<even <<"  Sum Of Odd Number ="<<odd;
}
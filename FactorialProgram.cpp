#include<iostream>
using namespace std;
int main()
{
  int val ,fact=1;
  //take value from user
  cout<<"Enter a no.\n";
  cin>>val;
  //to find the factor
  for(int i=val;i!=0;i--)
  {
     fact=fact*i;
  }
  cout<<"Factorial ="<<fact;
}
/*5:Write a program to accept array  from user .Accept number from user and search number is present in array or not.*/
#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,j,n;
    cout<<"Enter the element in arrays";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the no."<<endl;
    cin>>n;
    for(j=0;j<n;j++)
    {
        if(arr[j]==n)
        cout<<"Element is present in an array at index "+j ;
        else
         cout<<"Element is not present in an array ";
    }
    
}
/*1:Write a program to create an array of integers and perform following operations on that array like 
finding the sum, average, maximum and minimum number in that array. Accept the numbers of the 
array from user. */
#include<iostream>
using namespace std;

int main()
{
 int arr[5];
 int i,j,sum=0,temp;
 //accept the array from user
 cout<<"Enter the element in an array";
 for(i=0;i<5;i++)
 {
 cin>>arr[i];
 }
 //calculating the sum of array 
 for( j=0;j<5;j++)
 {
    sum=sum+arr[j];
 }
 //calculating the average of array
  int avg=sum/5;
  cout<<"SUM="<<sum<<" AVG="<<avg;

//sorting the array in ascending
 for(int i=0;i<5;i++)
 {
    
    if(arr[0]<arr[i])
    { 
        arr[0]=arr[i];  
    }  
 }
 //finding the maximum value from array
 cout<<" Max="<<arr[0];
 for(int j=0;j<5;j++)
 {
    
    if(arr[0]>arr[j])
    { 
        arr[0]=arr[j];  
    }  
 }
 //finding the mininmum value from array
 cout<<" Min="<<arr[0];

}
#include<iostream>
using namespace std;

class stack{

    int arr[5];
    int top=-1;
    public:
    int i;
    
    int push()
    {
        for(int i=0;i<5;i++)
        {
           cout<<"Push :";
           cin>>arr[i];
           ++top;
        }
       
    }
    
    int pop()
    {
        for(int j=top;j>=0;j--)
        {
           cout<<"\nPop :"<<arr[j];
           top--;
        }    
    }

};

int main()
{
   stack obj;
   obj.push();
   obj.pop();

}
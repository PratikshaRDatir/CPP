#include<iostream>
using namespace std;

class complex{
private:
int real;
int imag;

public:
void acceptValue(int a=1,int b=1)
{
  cout<<"Enter the real and imag value:";
  cin>>real>>imag;
}

void printValue()
{
  cout<<"complex value ="<<real<<"+j"<<imag;
}
friend void changeValue();  //frind funs

};

//funs outside the class
void changeValue()
{
 complex c2;
 c2.real=3;
 c2.imag=7;
 c2.printValue();
 
}

int main()
{
    changeValue(); //funs called
    return 0;
}
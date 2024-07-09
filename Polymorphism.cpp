/*Geometric Shapes with Polymorphism:
Problem Statement: Extend the shape hierarchy example by implementing polymorphism. Define a base class Shape with
methods to calculate area and perimeter. Then, create derived classes like Circle, Rectangle, and Triangle, each 
with its own implementation of these methods.*/
#include<iostream>
using namespace std;
 
 class shape
 {
    public:
    virtual int area()
    {
      return 0;
    }   
    virtual int perimeter()
    {
       return 0;
    }
    
 };
 class circle:public shape
 {
  //protected:
   float a,p;
   // float pi=3.14;
   int radius;
    public:
    circle()
    {
      radius=1; 
    }
    circle(int radius)
    {
      this->radius=radius; 
    }
    int area()
    {
      a=3.14*radius*radius;

    }   
    int perimeter()
    {
      p=2*3.14*radius;
    }
    void display()
    {
       cout<<"Area of Circle="<<a<<"\nPerimeter of circle="<<p;
    }

 };
 class rectangle:public shape
 {
  protected:
   float ar,peri;
   int l,b;
    public:
    rectangle(int l,int b)
    {
      this->l=l;
      this->b=b;
    }
    float area()
    {
      ar=l*b;
    }   
    float perimeter()
    {
      peri=(l*b)*2;
    }
    void display()
    {
       cout<<"\nArea of rectangle="<<ar<<"\nPerimeter of rectangle="<<peri;
    }

 };
 class triangle :public shape
 {
    float ar1,peri1;
    int l,b,h;
    public:
    triangle(int l,int b,int h)
    {
      this->l=l;
      this->b=b;
      this->h=h;

    }
    int area()
    {
      ar1=0.5*b*h;
    }   
    int perimeter()
    {
      peri1=l+b+h;
    }
    void display()
    {
      cout<<"\nArea of triangle="<<ar1<<"\nPerimeter of triangle="<<peri1;
    
    }

 };

int main(){
   //shape sh;
   circle ci(10);
   ci.area();
   ci.perimeter();
   ci.display();

   rectangle rec(2,4);
   rec.area();
   rec.perimeter();
   rec .display();

   triangle tr(12,3,4);
   tr.area();
   tr.perimeter();
   tr.display();


}
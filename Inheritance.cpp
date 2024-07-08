/*Person and Student Inheritance:
Problem Statement: Model a system for handling individuals and students within an educational institution. 
Create a base class Person with attributes like name and age. Derive a Student class with additional attributes
like student ID and GPA, inheriting the common attributes from the Person class.*/
#include<iostream>
using namespace std;
class person
{
   protected:
   string name;
   int age;
   public:
   person()
   {
      cout<<"---default person class constructor ---"<<endl;
   }
   person(string name,int age)
   {
      this->name=name;
      this->age=age;
   }
   void display()
   {
     cout<<"Name="<<name<<" Age="<<age<<endl;
   }
};
class student:public person
{
  protected:
  int studentid;
  public:
  student()
  {
     studentid=000;
  }
  student(int studentid,string name,int age):person(name,age)
  {
    this->studentid=studentid;
  }
  void display()
   {
     cout<<"StusentID="<<studentid<<" Name="<<name<<" Age="<<age<<endl;
   }
    
};
int main()
{
   person p("abc",19);
   p.display();
   student s(101,"Ram",20);
   s.display();
}
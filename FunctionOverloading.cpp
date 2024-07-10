
/*function overloading
Que.write a function 'Add' which is able to add 
3 int value and 1 float value 
2 int value and 2 float value ,
1 int value and 3 float value,
4 int value ,
4 float value,
1 char value and 3 float value.*/

#include<stdio.h>

void add(int a=0,int b=0,int c=0,float x=0)
{
  float res;
  res=a+b+c+x;
  printf("a=%d b=%d c=%d x=%.2f --> %.2f \n" ,a,b,c,x,res);
}

void add(float a,int b,int x,float y)
{
  float res;
  res=a+b+x+y;
  printf("a=%.2f b=%d x=%d y=%.2f --> %.2f \n" ,a,b,x,y,res);
}

void add(int a,float x,float y,float z)
{
  float res;
  res=a+x+y+z;
  printf("a=%d  x=%.2f y=%.2f z=%.2f --> %.2f \n" ,a,x,y,z,res);
}

void add(int a,int b,int c,int d)
{
  int res;
  res=a+b+c+d;
  printf("a=%d b=%d c=%d d=%d --> %d \n" ,a,b,c,d,res);

}
void add(float w,float x,float y,float z)
{
  float res;
  res=w+x+y+z;
  printf("w=%.2f  x=%.2f y=%.2f z=%.2f --> %.2f \n" ,w,x,y,z,res);
}
void add(char a,float x,float y,float z)
{
  float res;
  res=a+x+y+z;
  printf("a=%d  x=%.2f y=%.2f z=%.2f --> %.2f \n" ,a,x,y,z,res);
}

int main()
{
    add(1,2,3,4);
    add(2.00f,3,6,1.00f);
    add(2,4.0f,6.000f);
    add(1,2,3,5);
    add(3.00f,2.00f,6.00f,1.00f);
    add('A',1.0f,5.000f,0.00f);
    return 0;

}
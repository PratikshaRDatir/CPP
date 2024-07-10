//FUNCTION OVERLODING

#include<stdio.h>
void print(int a,int b)
{
 printf(" a=%d b=%d",a,b);
}

void print(char ch)
{
printf("\n ch=%c",ch);
}

void print(int c)
{
printf("\n c=%d",c);
}

void print(int a,char ch)
{
printf("\n a=%d ch=%c ",a,ch);
}

void print(char ch,int a)
{
printf(" \n ch=%c a=%d",ch,a);
}

int main()
{
     print(1,2);    //this is the funs overloding which has same name of funs and differ signature or defination
     print('A');
     print(1);
     print(20,'P'); 
     print('B',5);
    return 0;

}
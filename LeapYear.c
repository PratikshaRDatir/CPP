#include<stdio.h>
int main()
{
   
   int year;
   printf("Enter the year ::");
   scanf("%d",&year);

  if(year%4==0)
  printf("The year is leap year");
   
  else if(year%100!=0)
   printf("The year not is leap year");

  else if(year%4==0)
  printf("The year is  leap year");

  else
  printf("The year is not leap year");
}

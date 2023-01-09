#include<stdio.h>

int main()
{
  int year;

printf("Enter the year you want to enter :\n",year);
scanf("%d",&year);

if (year%400==0||year!=0&&year%4==0)
{
  printf("The year is a Leap year" );
}
else
{
  printf("The year is not a Leap year\n");
}

  return 0;
}

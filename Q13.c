// Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms. //

#include<stdio.h>

int main()
{
    int i;
  long sum = 0;
  long t = 1;

printf("Enter the number of terms you want to enter\n",t);
scanf("%ld",&t);

for ( i = 1 ; i <= 5 ; i++)
{
    printf("%d\n",t);
    if (t>i)
    {
        printf("+ \n");
    }
    sum = sum +t;
    t=t*10+1;
}
printf("The sum will be %ld",sum);
    return 0;
}

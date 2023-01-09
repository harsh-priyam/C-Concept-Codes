#include<stdio.h>

// Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]//

int main()
{
    int i,t,d,x,sum;

printf("Enter any value for X\n");
scanf("%d",&x);

printf("Enter any value for the number of terms\n",t);
scanf("%d",&t);
sum = 1;t=1;

for ( i = 1; i <= t; i++)
{
    t=t*x/i;
    sum=sum+t;


}
printf("The sum of the expression will be %d",sum);






    return 0;
}

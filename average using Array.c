#include<stdio.h>

int main(int argc, char const *argv[])
{
    int A[10];
    int i;
    int sum;
    float avg;
sum = avg = 0;

printf("Enter any 10 numbers you want to :\n");
for ( i = 0; i < 10 ; i++)
{
    scanf("%d",&A[i]);
}

    for (i = 0; i < 10; i++) 
    {
        sum = sum + A[i];
    }

    avg = sum / i;
    printf("The average of the numbers will be %f", avg);

    return 0;
}

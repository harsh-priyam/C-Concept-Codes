#include <stdio.h>

int SayHelloAndExecute(int x, int y)
{
    int sum;
    printf("Hello World\n");
    sum = x + y;
    printf("The sum of two given numbers will be %d\n",sum);
}

int SayGmAndExecute(int p, int q)
{
    int sum;
    printf("Good Morning World\n");
    sum = p + q;
     printf("The sum of two given numbers will be %d\n",sum);
}

int main()
{
   int (*ptr)(int a , int b);
   ptr = &SayGmAndExecute;

   (*ptr)(5,4);
    return 0;
}
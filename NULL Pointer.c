#include <stdio.h>
int main()
{
    int a = 54;
    int *ptr = NULL;

    printf("The value will be %d\n", ptr); /*This will initialise the value to 0 */  
 printf("The value will be %d\n",*ptr);   /* The program will Crash */
    return 0;
}
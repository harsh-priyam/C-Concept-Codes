#include <stdio.h>
#include<stdlib.h>
int main()
{
    int x = 35;
    int *ptr;
   // *ptr = 56;// /* This is very dangerous and we must avoid this line */

ptr = &x; /* ptr is no longer a wild pointer */

    printf("The value will be %d\n",*ptr);
    return 0;
}
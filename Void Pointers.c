#include <stdio.h>
int main()
{
    int x = 56;
    float y = 9.36;
    void *ptr;

    ptr = &x;
    printf("The value will be %d\n",*(int *)ptr);    /* Void ptr Cannot be dereference directly as *ptr */

    ptr = &y;
    printf("The value will be %f\n",*(float *)ptr);
    return 0;
}
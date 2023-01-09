#include <stdio.h>
int valfunc()
{
    static int i=0;
    i++;
    return i;
}

int main()
{
    printf("The value will be %d\n", valfunc());
    printf("The new value will be %d\n", valfunc());
    return 0;
}

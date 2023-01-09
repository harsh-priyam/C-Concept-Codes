#include<stdio.h>

int main(int argc, char const *argv[])
{
int i;
    printf("The value of argc will be %d\n",argc);

    for ( i = 0; i < argc; i++)
    {
        printf("The Value at index %d will be %s\n",i,argv[i]);
    }
    
    
    return 0;
}

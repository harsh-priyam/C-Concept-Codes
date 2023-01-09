#include<stdlib.h>
#include <stdio.h>
int main()
{
    int i,n,*ptr;

    printf("Enter the size of the array :\n");
    scanf("%d",&n);

    ptr = (int *)calloc(n,sizeof(int));

    for ( i = 0; i < n; i++)
    {
        printf("Enter the %d element for the array\n",i);
        scanf("%d",&ptr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("The value at %d will be %d respectively\n",i,ptr[i]);
    }
    
    
    printf("Enter the value for the new size of the array :\n");
    scanf("%d",&n);

    ptr = (int *)realloc(ptr , sizeof(int));

    for ( i = 0; i < n; i++)
    {
        printf("Enter the element at %d of the new array :\n",i);
        scanf("%d",&ptr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("The %d element of the new array will be %d\n",i,ptr[i]);
    }
    free(ptr);

    return 0;
}
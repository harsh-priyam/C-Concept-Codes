#include<stdlib.h>
#include <stdio.h>
int main()
{
    int *ptr;
    int i;
     
ptr = (int *)malloc(4*sizeof(int));

for ( i = 0; i < 4; i++)
{
    printf("Enter the %d elements of the array :\n",i);
    scanf("%d",&ptr[i]);
}
for ( i = 0; i < 4; i++)
{
    printf("So,the element at %d will be %d\n",i,ptr[i]);
}


    return 0;
}
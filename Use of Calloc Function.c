#include<stdlib.h>
#include <stdio.h>
int main()
{
    int i,*ptr,n;

printf("Enter the limit of your desired number set:\n");
scanf("%d",&n);

ptr=(int * )calloc(n,sizeof (int));

for ( i = 0; i < n ; i++)  /* when we comment out this for loop all value will initialise to 0 */
{
    printf("Enter the %d value for the array\n",i);
    scanf("%d",&ptr[i]);
}
for ( i = 0; i < n ; i++)
{
    printf("The value at %d will be %d",i,ptr[i]);
}

    return 0;
}
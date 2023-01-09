/*~~~~~~~ Memory leakage For C ~~~~~~~~*/


#include<stdlib.h>
#include <stdio.h>
int main()
{
int i,n;
int *ptr;

for ( i = 0; i < 45545; i++)
{
    printf("My Name is Harsh  Priyam\n");
    
    ptr = malloc(34444*sizeof(int));
    if (i % 100 == 0)
    {
        getchar();
    }
    free(ptr); /* If we Avoid this free statement then Memory leakage will be occur as from our Taskmanger*/
}


    return 0;
}
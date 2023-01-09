#include <stdio.h>



int main()  /* Reading a File */
{
    FILE *ptr = NULL;
    char string[37];

    ptr = fopen("file.txt","r");
    fscanf(ptr,"%s",string);

    printf("The Content is %s\n",string);
    return 0;
}


/*Writing a Function */

#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
char string[90]="I am A Disco Dancer";

ptr = fopen("file.txt","w");

fprintf(ptr,"%s",string);
    return 0;
}
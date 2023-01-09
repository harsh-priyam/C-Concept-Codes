/*~~~~~~~~ Uses Of fgetc ~~~~~~~~~ */

/*#include <stdio.h>
int main()
{
    FILE *ptr = NULL;

ptr = fopen("file.txt","r");

char c =fgetc(ptr);

printf("The content that i have just read is %c\n");


    return 0;
}*/




/*~~~~~~~~ Uses of fgets ~~~~~~~~*/

/*#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file.txt","r");

char string[43];

    char *c = fgets(string,12,ptr);

    printf("The content that i've just accessed is %s\n",c);
    return 0;
}*/




/*~~~~~~~~~~ Uses of fputc ~~~~~~~~~~*/

/*#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file.txt","w");

    fputc('x',ptr);

    return 0;
}*/





/*~~~~~~~~~~ Uses of fputs ~~~~~~~~~~*/

/*#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file.txt","w");

    fputs("harryismyteacher",ptr);
    return 0;
}*/
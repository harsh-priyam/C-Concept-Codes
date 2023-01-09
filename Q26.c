#include <stdio.h>



int main()
{
   int frq[128];
   char str[250];
int i;

printf("Enter the string of your Choice:\n");
gets(str);







for ( i = 0; i < 128 ; i++)
{
     frq[i]=0;
}

printf("Now for the frequency of the strings\n");

for ( i = 0; str[i] != '\0' ; i++)
{
    char c = str[i];
    frq[(int) c]++;
}

for ( i = 0; i<128 ; i++)
{
    if (frq[i]!= 0)
    {
        printf("%c=%d\n",((char) i),frq[i]);
    }
    
}




    return 0;
}
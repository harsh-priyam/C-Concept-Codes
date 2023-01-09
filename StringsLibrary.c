#include<stdio.h>
#include<string.h>





int main()
{
  char string1[] = ("Harsh");
  char string2[] = ("Priyam");
  char string3[56];



  puts(strcat(string1,string2));

  printf("The reverse of string 1 is : ");
  puts(strrev(string1));

  printf("The reverse of string 2 is : ");
  puts(strrev(string2));

   printf("the length of string1 is %d\n",strlen(string1));
   printf("the length of string 2 is %d\n",strlen(string2));

  printf("the starcmp of a string1 & string2 is %d :\n",strcmp(string2,string1));
 

  strcpy(string3 ,strcat(string1,string2));
  puts(string3);
    return 0;
}

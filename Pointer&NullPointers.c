#include <stdio.h>

int main()
{
	
 int a = 56;
 int *ptra  = &a;
 int *ptra2= NULL; //NULL POINTER Concept

printf("the address of a is %p\n",ptra);
printf("the address of a is %p \n",a);
printf("The value of a is %d\n",a);
printf("The value of a is %d\n",*ptra);
printf("The garbage adress will be %p\n",ptra2); //NULL POINTER CONCEPT





	return 0;
}

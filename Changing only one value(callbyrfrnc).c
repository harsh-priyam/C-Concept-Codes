#include <stdio.h>

void changevalue (int* a)
{

}

int main()
{
int a = 63;
int b = 54;

printf("The value of a is %d\n",a);
printf("The value of b is %d\n",b);

changevalue(&a);

printf("The new value of a is %d\n",a);
print("The value of b is %d\n",b);





return 0;
}
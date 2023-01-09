#include <stdio.h>

void swap(int *x , int *y)
{
 int temp;

 temp= *x ;
 *x = *y ;
 *y = temp;  


}



int main()
{
int a = 72;
int b = 98;

printf("The value of a is : %d\n",a);
printf("The value of b is : %d\n",b);

swap(&a,&b);

printf("The new value of a is %d\n",a);
printf("The new value of b is %d\n",b);








    return 0;
}

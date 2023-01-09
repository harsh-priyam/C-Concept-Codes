#include <stdio.h>

int sum(int x , int y)
{

return x+y;

}


int main()
{
 int (*pointer)(int a, int b);
 pointer = &sum;

 int value = (*pointer)(91,9);

 printf("The sum of the given two numbers will be %d\n",value);   
    return 0;
}
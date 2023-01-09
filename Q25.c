/*Finding The factorial of a number using while loops*/

#include <stdio.h>

int main()
{
    int i, fact;
    int num;
    i=fact=1;

  printf("Enter the number you want to find its factorial\n",num);
  scanf("%d",&num);

  while (i<=num)
  {
      fact=fact*i;
      i++;
  }
  printf("The factorial of %d is %d",num,fact);
    return 0;
}

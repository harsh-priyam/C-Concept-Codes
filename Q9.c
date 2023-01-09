#include <stdio.h>

int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int number;

    printf("Enter number you want to take out its factorial\n", number);
    scanf("%d", &number);

    

printf("The factorial of  %d is %d\n",number,factorial(number));
    return 0;
}

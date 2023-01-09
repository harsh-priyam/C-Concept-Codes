/* Checking If A Program is Palidrome or Not */
#include <stdio.h>

int FunctionPalindrome(int num)
{
    int temp = num;
    int Reversed = 0;

    while (num != 0)
    {
        Reversed = Reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("The Reversed Number will be %d\n", Reversed);

    if (temp == Reversed)
    {
        printf("Palindrome verified\n");
    }
    else
    {
        printf("Palindrome not verified\n");
    }
}

int main()
{
    int n;
    printf("Enter any number to check whether its a Palindrome or Not\n");
    scanf("%d", &n);

    FunctionPalindrome(n);

    return 0;
}
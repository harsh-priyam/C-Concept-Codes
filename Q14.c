//Write a C program to find the Armstrong number for a given range of number.//

#include <stdio.h>

void main()
{
    int i, sum, u, l, r, temp;
    printf("Enter any number for the upper limit number for Checking to be an ArmStrong\n", u);
    scanf("%d", &u);

    printf("Enter any number for the lower limit number for Checking to be an ArmStrong\n", l);
    scanf("%d", &l);

    printf("The armstrong numbers are in the list :");

    for (i = u; i <= l; i++)
    {
        temp = i;
        sum = 0;

        while (temp != 0)
        {
            r = temp % 10;
            temp = temp / 10;
            sum = sum +( r * r * r);
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }

        
    }
}
// Dynamic Memory Allocation
// ABC Pvt Ltd. manages employee records of other companies.
// Employee Id can be of any length and it can contain any character
// For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
// Then, you have to take employee id as an input and display it on screen.
// Store the employee id in a character array which is allocated dynamically.
// You have to create only one character array dynamically
// EXAMPLE:
// Employee 1:
// Enter no of characters in your eId
// 45
// Dynamically allocate the character array.
// take input from user

// Employee 2:
// Enter no of characters in your eId
// 4
// Dynamically allocate the character array.
// take input from user

// Employee 3:
// Enter no of characters in your eId
// 9
// Dynamically allocate the character array.
// take input from user

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i, n, ch;
    char *set;
    printf("~~~~~Welcome to ABX pvt. Limited Company~~~~~ \n");

    printf("Enter the value for the number employess i'ds you want to store\n");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        set = (char *)malloc((n + 1) * sizeof(char));

        printf("Enter the number of chracter of the Employee %d\n", i);
        scanf("%d", &ch);

        printf("Enter the ID number of the Employee %d\n", i);
        scanf("%s", set);

        printf("The ID number for Employee %d  is %s\n", i, set);
    }
    free(set);

    return 0;
}

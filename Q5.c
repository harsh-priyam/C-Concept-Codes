/* Q5.)write a program to print starpattern by ascending order */


#include <stdio.h>


int starstyle(int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("Enter the number of rows you want to print\n", rows);
    scanf("%d", &rows);

    starstyle(rows);
    return 0;
}

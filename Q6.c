#include <stdio.h>

int starpattern(int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}




int antistarpattern(int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows , type;

       printf("Please enter 1 for starpattern and 0 for antistarpattern\n");
    scanf("%d",type);

    printf("Now, enter the number of rows you want to enter\n");
    scanf("%d", &rows);
    


switch (type)
{
case '1':
    starpattern (rows);
    break;
case '0':
    antistarpattern (rows);

default:
        printf("invalid choice");
    break;
}
     
     
    starpattern(rows);
    antistarpattern(rows);
    
    return 0;
}

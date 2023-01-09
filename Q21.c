#include <stdio.h>
int main()
{
    int x[3][3], y[3][3], result[3][3];
    int i, j, k, sum = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("Enter the %d %d elements of the first matrix:\n", i, j);
            scanf("%d", &x[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("Enter the %d %d elements of the second matrix:\n",i,j);
            scanf("%d", &y[i][j]);
        }
    }

    printf("Your's 1st matrix will be :\n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    
printf("Yours's Second matrix will be :\n");


    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",y[i][j]);
        }
        printf("\n");
    }

for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        for ( k = 0; k < 3; k++)
        {
            sum = sum + x[i][k]*y[k][j];

            

            result[i][j]=sum;
        }
        
    }
    
}

printf("The resultant matrix will be :\n");


    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }



    return 0;
}
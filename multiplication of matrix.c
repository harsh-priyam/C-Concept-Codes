/*Multiplication of the matrix using multidimensional arrays*/
#include <stdio.h>
int main()
{
    int matrix1[10][10], matrix2[10][10], multiply[10][10], i, j, k, m, n, p, q, sum;
    sum = 0;

    printf("Enter the number of rows for first matrix : \n", m);
    scanf("%d", &m);
    printf("Enter the number of coloums for first matrix :\n", n);
    scanf("%d", &n);

    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("Enter the components of the first matrix : %d%d ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the number of rows for second matrix : \n", p);
    scanf("%d", &p);
    printf("Enter the number of coloums for second matrix :\n", q);
    scanf("%d", &q);

    if (n != p)
    {
        printf("Sorry!But Multiplication is  not possible\n");
    }
    else
    {

        for (i = 0; i < p; i++)
        {
            printf("\n");
            for (j = 0; j < q; j++)
            {
                printf("The components of the matrix will be : %d%d", i, j);
                scanf("%d", &matrix2[i][j]);
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < q; j++)
        {
            printf("\n");
            for (k = 0; k < p; k++)
            {
                sum = sum + matrix1[i][k] * matrix2[k][j];
            }
            multiply[i][j] = sum;
            sum = 0;
        }
    }
    printf("The product of the matrices will be :\n");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < q; j++)
        {
            printf("%d\t", multiply[i][j]);
        }
    }

    return 0;
}

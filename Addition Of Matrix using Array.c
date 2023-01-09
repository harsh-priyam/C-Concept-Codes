#include<stdio.h>

int main(int argc, char const *argv[])
{
    int A[3][3],B[3][3],C[3][3];
    int i,j;
    
    printf("Welcome User! Here, You can add any two diffrent matrices with each other \n");

    
    

    for ( i = 0; i < 3 ; i++)
    {
        for ( j = 0; j < 3 ; j++)
        {
            printf("Enter any 9 number for the first matrix :\n");
            scanf("%d",&A[i][j]);
        }
        
    }
    
    for ( i = 0; i < 3 ; i++)
    {
        for ( j = 0; j < 3 ; j++)
        {
            printf("Enter any 9 number for the second matrix : \n");
            scanf("%d",&B[i][j]);
        }
        
    }
    
    for ( i = 0; i < 3 ; i++)
    {
        for ( j = 0 ; j < 3 ; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf(" %d",C[i][j]);
        }
        printf("\n");
    }
    
       
    return 0;

}

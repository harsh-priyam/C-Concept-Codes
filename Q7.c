#include <stdio.h>

int NoReverseorder(int arr[])
{
    int j;
    for (j = 0; j < 7; j++)
    {
        printf("The normal order in which at position %d is %d\n", j, arr[j]);
    }
    printf("\n");
}

int Reverseorder(int arr[])
{
    int j;
    int temp;

    for (j = 0; j < 7; j++)
    {
        temp = arr[j];
        arr[j] = arr[6 - j];
        temp = arr[6 - j];

        printf("The Reverse order of the array at %d is %d \n", j, arr[j]);
    }
    printf("\n");
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 67};
    printf("the normal order of the array is :\n");

    NoReverseorder(arr);

    printf("the reverse order of the following array will be :\n");

    Reverseorder(arr);

    return 0;
}

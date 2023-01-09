#include <stdio.h>

func1(int array[])
{
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }

    
    return 0;
}
int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int i;

    printf("the value of index 4 is %d\n", arr[4]);

    func1(arr);

    printf("The value of index 4 is %d\n", arr[4]);

    return 0;
}

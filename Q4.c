// Quick Quiz:
// Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.

// a = 4
// b = 3

// after running the function, the values of a and b should be:
// a = 7
// b = 1

// solution.......


 #include <stdio.h>

void reference(int*x, int*y)
{
    int temp;

    *x = *x + *y;
    temp = *x;
    temp = temp - *y;
    *y = temp - *y;


}

int main()
{
    int a = 4;
    int b = 3;
    
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);

reference( &a,&b);
printf("The new value of a will be : %d\n",a);
printf("The new value of b will be : %d\n",b);

    return 0;
}



void swap(int x , int y)
{
int temp;
temp = x;
x = y;
y = temp;
}



void main()
{
    int a = 32;
    int b = 43;

printf("The value of a is %d\n",a);
printf("The value of b is %d\n",b);

swap(a,b);

printf("The new value of a is %d\n",a);
printf("The new value of b is %d\n",b);



    return 0;
}

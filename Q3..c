#include<stdio.h>
 
 int fib_recursive (int n)

{
    if (n==1 || n==0) {
         return (n-1);
    }
 else {

    return (fib_recursive(n-1)+fib_recursive(n-2));
 }
}

 int fib_iterative (int n){
int a=0;
int b=1;

for (int i = 0; i < n-1 ; i++)
{
    b=a+b;
    a=b-a;
}
return a;
}


int main(int argc, char const *argv[])
{
    int number;
    printf("Enter the input of any number for the fibonacci sequence\n");
    scanf("%d",&number);

printf("The recursive answer is : %d \n",fib_recursive);
printf("The incursive answer is : %d \n",fib_iterative);

    return 0;
}

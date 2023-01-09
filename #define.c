#include <stdio.h>
#define PI 3.14
#define radius(r) r*r
#define height(h) h
int main()
{
int r=3;
int h=5;

printf("The area of cylinder will be %f\n",PI*radius(r)*height(h));

    return 0;
}
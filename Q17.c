#include<stdio.h>
#include<math.h>


int main()
{
    float theta,a1,a2,a3;

printf("Enter the value of theta\n",theta);
scanf("%f",&theta);

theta=theta*3.14/180;

a1=sin(theta);
a2=cos(theta);
a3=tan(theta);

printf("The value of sin angle will be %f\n",a1);
printf("The value of cos angle will be %f\n",a2);
printf("The value of tan angle will be %f\n",a3);




    return 0;
}

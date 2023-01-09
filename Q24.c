
/*Area Of a Circle By using Call by value pointers Function */


#include <stdio.h>
#include<math.h>
#define PI 3.14


int distance;

int FunctionForDistance(int x1 , int x2 , int y1 ,int y2)
{
     
     distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
     printf("The distance between the Lines will be %d\n",distance);

}

int FunctionForArea(int radius)
{
    radius = distance;
   float area;
   area = PI*radius*radius;
   printf("The Area of the Circle will be %f\n",area);

}



int main()
{
 int a1,a2,b1,b2;

 printf("Enter the value for the first X coordinate \n");
 scanf("%d",&a1);
 printf("Enter the value for the second X coordinate \n");
 scanf("%d",&a2);

 printf("Enter the value for the first Y coordinate \n");
 scanf("%d",&b1);
 printf("Enter the value for the second Y coordinate \n");
 scanf("%d",&b2);
 
 int (*ptr)(int , int , int, int);
 (ptr) = &FunctionForDistance;
 (*ptr)(a1,a2,b1,b2); 

int (*ptr2) (int);
(ptr2) = &FunctionForArea;
(*ptr2)(distance);
    return 0;
}
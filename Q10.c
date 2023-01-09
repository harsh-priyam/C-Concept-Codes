/* Construct a program as you own a Driving agency by inputting three Drivers detail */



#include <stdio.h>
#include <string.h>
struct Drivers
{
    char name[53];
    int DL; 
    int route;
    int kms;
};

int main()
{
   struct Drivers driver1,driver2,driver3;

   printf("Enter the name of the First Driver\n");
   scanf("%s",&driver1.name);
   
   printf("Enter the DL no. of the First Driver\n");
   scanf("%d",&driver1.DL);

   printf("Enter route of the First Driver\n");
   scanf("%d",&driver1.route);

   printf("Enter the kms travelled by vechicle by First Driver\n");
   scanf("%d",&driver1.kms);


 printf("Enter the name of the Second Driver\n");
   scanf("%s",&driver2.name);
   
   printf("Enter the DL no. of the Second Driver\n");
   scanf("%d",&driver2.DL);

   printf("Enter route of the Second Driver\n");
   scanf("%d",&driver2.route);

   printf("Enter the kms travelled by vechicle by Second Driver\n");
   scanf("%d",&driver2.kms);


 printf("Enter the name of the Third Driver\n");
   scanf("%s",&driver3.name);
   
   printf("Enter the DL no. of the Third Driver\n");
   scanf("%d",&driver3.DL);

   printf("Enter route of the Third Driver\n");
   scanf("%d",&driver3.route);

   printf("Enter the kms travelled by vechicle by Third Driver\n");
   scanf("%d",&driver3.kms);







printf("~~~~~~~Details Of Drivers Of Maa Santoshi Driving Agency~~~~~~~~~~~\n");

printf("\n");

printf("The Name of the  First Driver : %s\n",driver1.name);
printf("The DL number of the First Driver :%d \n",driver1.DL);
printf("The Route of The First Driver is : %d\n",driver1.route);
printf("The Total kilometers travelled by First Driver is %d\n ",driver1.kms);

printf("\n");

printf("The Name of the  Second Driver : %s\n",driver2.name);
printf("The DL number of the Second Driver :%d \n",driver2.DL);
printf("The Route of The Second Driver is : %d\n",driver2.route);
printf("The Total kilometers travelled by Second Driver is %d \n",driver2.kms);

printf("\n");

printf("The Name of the  Third Driver : %s\n",driver3.name);
printf("The DL number of the Third Driver :%d\n ",driver3.DL);
printf("The Route of The Third Driver is : %d\n",driver3.route);
printf("The Total kilometers travelled by Third Driver is %d \n",driver3.kms);





























    return 0;
}

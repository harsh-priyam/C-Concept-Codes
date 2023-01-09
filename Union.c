#include <stdio.h>
#include <string.h>

union laptops
{
    int price;
    int generation;
    int ram;
};

int main()
{

union laptops asus,hp,dell;

asus.price = 76000;
hp.price = 65000;
dell.price=88000;

asus.generation = 4;
hp.generation = 10;
dell.generation = 11;

asus.ram = 8;
hp.ram = 6;
dell.ram = 16;





printf("The price of asus is %d\n",asus.price);
printf("The price of hp is %d\n",hp.price);
printf("The price of dell is %d\n",dell.price);

printf("The generation of processor of asus is %d\n",asus.generation);
printf("The generation of processor of hp is %d\n",hp.generation);
printf("The generation of processor of dell is %d\n",dell.generation);


printf("the ram in asus CPU is %d\n",asus.ram);
printf("the ram in hp CPU is %d\n",hp.ram);
printf("the ram in dell CPU is %d\n",dell.ram);


    return 0;
}

#include <stdio.h>

typedef struct student

{
    float height;
    int weight;
} std;

int main()
{
    std harsh, sahil, aman;

    harsh.height = 5.10;
    sahil.height = 6;
    aman.height = 5.11;

    harsh.weight = 72;
    sahil.weight = 80;
    aman.weight = 70;

    printf("the height of harsh is %f\n", harsh.height);
    printf("the height of sahil is %f\n", sahil.height);
    printf("the height of aman is %f\n", aman.height);

    printf("the weight of harsh is %d\n", harsh.weight);
    printf("the weight of sahil is %d\n", sahil.weight);
    printf("the weight of aman is %d\n", aman.weight);

    return 0;
}

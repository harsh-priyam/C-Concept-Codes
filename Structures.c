#include <stdio.h>
#include <string.h>

struct student
{
    int marks;
    char grade;
    char favchrctr;
    char house;
    int rank;
};

int main()

{
    struct student harsh, sahil, aman;

    harsh.marks = 87;
    sahil.marks = 85;
    aman.marks = 84;

    harsh.grade = 'A';
    sahil.grade = 'B';
    aman.grade = 'C';

    harsh.favchrctr = 'H';
    sahil.favchrctr = 'S';
    aman.favchrctr = 'A';

    harsh.house = 'G';
    sahil.house = 'B';
    aman.house = 'R';

    harsh.rank = 1;
    sahil.rank = 2;
    aman.rank = 3;

    printf("The marks of harsh is %d\n", harsh.marks);
    printf("The marks of sahil is %d\n", sahil.marks);
    printf("The marks of aman is %d \n", aman.marks);

    printf("The grade obtained by harsh is %c\n", harsh.grade);
    printf("The grade obtained by sahil is %c\n", sahil.grade);
    printf("The grade obtained by aman is %c\n", aman.grade);

    printf("The house of harsh is %c\n", harsh.house);
    printf("The house of sahil is %c\n", sahil.house);
    printf("The house of aman is %c\n", aman.house);

    printf("The favourite chracter of harsh is %c\n", harsh.favchrctr);
    printf("The favourite chracter of sahil is %c\n", sahil.favchrctr);
    printf("The favourite chracter of aman is %c\n", aman.favchrctr);

    printf("The rank of harsh will be %d\n", harsh.rank);
    printf("The rank of sahil will be %d\n", sahil.rank);
    printf("The rank of aman will be %d\n", aman.rank);

    return 0;
}

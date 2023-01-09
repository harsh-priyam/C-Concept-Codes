/* Stone , Paper & Scissors Game  via C */


#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

int RandomNumberFunction(int num)
{
    srand(time(NULL));
    return rand() % num;
}

int GreatestFunction(char chr1, char chr2)
{
    if (chr1 == chr2)
    {
        return -1;
    }

    if (chr1 == 'R' && chr2 == 'S')
    {
        return 1;
    }
    else if (chr1 == 'S' && chr2 == 'R')
    {
        return 0;
    }
    if (chr1 == 'P' && chr2 == 'R')
    {
        return 1;
    }
    else if (chr1 == 'R' && chr2 == 'P')
    {
        return 0;
    }
    if (chr1 == 'S' && chr2 == 'P')
    {
        return 1;
    }
    else if (chr1 == 'P' && chr2 == 'S')
    {
        return 0;
    }
}

int main()
{
    char string[30];
    int i,  temp;
    char Choice[] = {'R', 'P', 'S'};
    char CPUchar, Playerchar;
    int Playerscore = 0, CPUscore = 0;

    printf("T.A.R.S Games Presents....\n\n");
    printf("Co-Powered By nvidia\n\n");
    printf("THE STONE PAPER & SCISSORS : NOSTALGIA EDITION\n\n");

    printf("Enter Your Name Player \n");
    scanf("%s", string);

    

    for (i = 0; i < 5; i++)
    {
        printf("Hey! %s , its Your Turn\n", string);
        printf("Please Select ::>>> (1=Rock),(2=Paper),(3=Scissors)\n");
        scanf("%d", &temp);
        getchar();
        Playerchar = Choice[temp - 1];

        printf("Now,CPU's Turn\n");
        temp = RandomNumberFunction(5) + 1;
        CPUchar = Choice[temp - 1];
        printf("So, CPU has Chosen %c in his turn\n", CPUchar);

        if (GreatestFunction(CPUchar, Playerchar) == -1)
        {
            CPUscore = CPUscore + 1;
            Playerscore = Playerscore + 1;
            printf("This Round has been Drawn\n");
        }
        else if (GreatestFunction(CPUchar, Playerchar) == 1)
        {
            CPUscore = CPUscore + 1;
            printf("Hahahha!! CPU got it this Time\n");
        }
        else
        {
            Playerscore = Playerscore + 1;
            printf("Wow!! This time you have got this \n");
        }
    }

    if (Playerscore > CPUscore)
    {
        printf("Congratulations!! You Won This Game....\n");
    }
    else if (CPUscore > Playerscore)
    {
        printf("Oopss You Lost This Game...\n");
    }
    else
    {
        printf("Shake Hands! Game has Been drawn....\n");
    }

    return 0;
}
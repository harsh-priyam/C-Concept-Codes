#include<stdio.h>


int main()
{
    char input;
    float rstodollar = 0.014;
    float poundstoeuro = 1.10;
    float zenitocad =  0.000152;
    float riyaltoyuan =  1.79;
     float first;
     float second;


while (1)
{
    printf("Enter The input Chracter. q to quit\n     1. rs to dollar\n    2. pounds to euro\n    3. zeni to cad\n    4. riyal to yuan\n");
    scanf(" %c",&input);


switch (input)
{
case 'q':
    printf("The Program is now closing....");
goto end;
    break;

case'1':
       printf("Enter the first unit of amount you want to convert into second unit\n");
       scanf("%f",&first);
       second= first * rstodollar;
       printf("The %f rs is %f dollar ",first,second);
       break;

case'2':
       printf("Enter the first unit of amount you want to convert into second unit\n");
       scanf("%f",&first);
       second= first * poundstoeuro;
       printf("The %f pounds is %f euro",first ,second);
       break;

case'3':
       printf("Enter the first unit of amount you want to convert into second unit\n");
       scanf("%f",&second);
       second= first * zenitocad;
       printf("The %f zeni is %f cad",first,second);
       break;

case '4':
        printf("Enter the first unit of amount you want to convert into second unit\n");
        scanf("%f",&second);
        second= first * riyaltoyuan;
        printf("The %f riyal is %f yuan",first , second);

    

default:
       printf("Its default set");
    break;
}

}
end:
    return 0;
}

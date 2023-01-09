/* write a program a student if he had passed in maths or science then he will be rewarded by 15 rs 
  and if he manages to pass in both then he will get 50 rs & lastly if he got not passed in both of them 
  then he will not get any reward */
    



#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mathscore,sciencescore;

     printf("Enter marks obtained in maths\n");

     scanf("%d",& mathscore);

printf("Enter marks obtained in science\n");
 scanf("%d",& sciencescore);


 if (mathscore>=40 && sciencescore>=40)
 {
     printf("Bravo! You will be awarded by 50 rupees as u have passed in both\n");
 }
 
else if (mathscore>=40 || sciencescore>=40)
{
    printf("As You have passed in any of the two , so you will be awarded by 15 rupees\n");
}

else
{
    printf("Sorry! you will not get any reward\n");
}



    return 0;
}

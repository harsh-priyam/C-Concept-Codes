#include<stdio.h>
#include<math.h>


int main()
{
  float D,l1,l2,g1,g2;

    printf("Enter the value of latitude 1",l1);
    scanf("%f",&l1);

    printf("Enter the value of latitude 2",l2);
    scanf("%f",&l2);

    printf("Enter the value of longitude 1",g1);
    scanf("%f",&g1);

    printf("Enter the value of longitude 2",g2);
    scanf("%f",&g2);

    l1=l1*180/3.14;
    l2=l2*180/3.14;
    g1=g1*180/3.14;
    g2=g2*180/3.14;

D=3963 * acos(sin(l1))*(sin(l2))+(cos(l1))*(cos(l2))*(cos(g2-g1));
printf("So,The value of expression will be %f\n",D);

    return 0;
}

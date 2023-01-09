#include<stdio.h>
int main()
{
int i,num[5],lum[5],multi,n;
printf("Enter the components odf the arrray :\n");
for ( i = 0; i < 5; i++)
{
     scanf("%d",&num[i]);
}
printf("enter more 5 types of compo\n");
for ( i = 0; i < 5; i++)
{
     scanf("%d",&lum[i]);
}
for ( i = 0; i < 5; i++)
{
     multi=num[i]*lum[i];
printf("The result will be %d\n",multi);
}

for ( i = 0; i < 5; i++)
{
     if (num[0]*lum[0]>num[i]*lum[i])
     {
          num[0]*lum[0]==num[i]*lum[i];
     }
     
}
printf("The largest among all result will be %d\n",num[i]*lum[i]);

     return 0;
}
#include<stdlib.h>
#include <stdio.h>
int main()
{
printf("Today's Date is %s\n",__DATE__);
printf("Current Time is %s\n",__TIME__);
printf("The Current Line will be %d\n",__LINE__);
printf("ANSI : %d\n",__STDC__);    
    return 0;
}
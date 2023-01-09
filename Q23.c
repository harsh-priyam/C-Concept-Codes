/* ~~~~~~Command  Line  Calculator~~~~~~~ */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *operator;
    int num1, num2;
    operator= argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    if (strcmp(operator, "sum") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(operator, "difference") == 0)
    {
        printf("%d\n", num1 - num2);
    }
    else if (strcmp(operator, "product") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    else if (strcmp(operator, "divide") == 0)
    {
        printf("%d\n", num1 / num2);
    }

    return 0;
}

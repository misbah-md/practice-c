#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char var;
    printf("enter the operators+,-,*,/,%");
    scanf("%c", &var);
    printf("enter 2 numbers");
    scanf("%d%d", &a, &b);
    switch (var)
    {
    case '+':
        printf("%d%d=%d+%d", a + b);
        break;
    case '-':
        printf("%d%d=%d-%d", a - b);
        break;
    case '*':
        printf("%d%d=%d*%d", a * b);
        break;
    default:
        printf("not present");
        break;
    }
    return 0;
}
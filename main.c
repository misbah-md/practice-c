#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0;
    char var;
    printf("operators among + - * :\n");
    scanf("%c", &var);
    printf("enter the number:\n");
    scanf("%d%d", &a, &b);
    switch (var)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d-%d=%d",a,b, a - b);
        break;
    case '*':
        printf("%d*%d=%d",a,b, a * b);
        break;
    default:
        printf("not present");
        break;
    }
    return 0;
}
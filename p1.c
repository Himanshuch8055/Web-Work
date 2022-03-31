#include <stdio.h>

int main()
{
    int a, b;
    printf("type number1:");
    scanf("%d", &a);

    printf("type number2:");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is greater", a);
    }
    else
    {
        printf("%d is greater", b);
    }
    return 0;
}
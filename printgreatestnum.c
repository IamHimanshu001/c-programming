#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter 1st number:");
    scanf("%d", &a);
    printf(" enter 2nd number:");
    scanf("%d", &b);
    printf(" enter 3th number:");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greatest number", a);
    }
    if (b > a && b > c)
    {
        printf("%d is greatest number ", b);
    }
    if (c > a && c > b)

    {
        printf("%d is greatest number", c);
    }

    return 0;
}

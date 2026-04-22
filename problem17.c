#include <stdio.h>
int main()
{
    int a;
    printf(" enter a number : ");
    scanf("%d", &a);

    if (a >= 90 && a <= 100)
    {
        printf("excellent\nu deserve a gold medal");
    }
    else if (a < 90 && a >= 70)
    {
        printf("u do ur best :");
    }
    else if (a < 70 && a >= 33)
    {
        printf("not bad");
        /* code */
    }
    else if (a < 33)
    {
        printf("fail :)");
    }

    return 0;
}
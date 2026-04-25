#include <stdio.h>
int main()
{
    int a;
    int c, b;
    printf("enter a number : ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("enter 1st num.. :");
        scanf("%d", &c);
        printf("enter 2nd num... :");
        scanf("%d", &b);

        if (c >= 60 && c <= 90)
        {
            printf("number is good\n:");

            printf("the sum of both num... is : %d\n", c + b);
            printf("multiplication of both numbr is : %d\n", c * b);
        }

        else
        {
            printf("doobara koshish karo : ");
        }
        break ;
    }

    return 0;
}
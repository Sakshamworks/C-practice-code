#include <stdio.h>
int main()
{
    int a, b, c;
    for (int i = 1; i <= 100; i++)
    {
        printf("enter the number : ");
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            printf("number is even\n ");
        }
        else
        {
            printf("number is odd");
            break;
        }
    }
}
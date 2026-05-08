#include <stdio.h>
int main()
{
    int a, b;
    for (int i = 1; i <= 100; i++)
    {
        printf("enter a number : ");
        scanf("%d", &a);
        if (a % 7 != 0)
        {
            printf("numnber is not divided by 7 ");
            break;
        }
        else
        {
            printf("number is divided by 7 : \n");
        }
    }
}
//swap number using temporary or third variable
#include <stdio.h>
int main()
{
    int x, y, t;
    printf("enter the 1st number : ");
    scanf("%d", &x);
    printf("enter the 2nd number : ");
    scanf("%d", &y);
    printf("\nbefore swapping : %d\n%d\n", x, y);
    t = x;
    x = y;
    y = t;
    printf("\nafter swapping :%d\n%d\n", x, y);

    return 0;
}
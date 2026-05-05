// write the program to swap numbers without using temporary or third variable
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter 1st number : ");
    scanf("%d", &a);
    printf("enter 2nd number : ");
    scanf("%d", &b);
    printf("before swapping : %d\n%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping : %d\n%d\n", a, b);
    return 0;
}
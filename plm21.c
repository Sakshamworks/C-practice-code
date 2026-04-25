#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the english no.. : ");
    scanf("%d", &a);
    printf("enter the maths number : ");
    scanf("%d", &b);
    printf("enter the physics no... : ");
    scanf("%d", &c);
    if (a >= 33 && a <= 100 && b >= 33 && b <= 100 && c >= 33 && c <= 100)
    {
        printf("the persent you obtain : %.2f\n",((a + b + c)/300.0)*100);
        printf("congratulation , you are pass ");
    }
    else
    {
        printf("bad luck try next time :( ");
    }
    return 0;
}
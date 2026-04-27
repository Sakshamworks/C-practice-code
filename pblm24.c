#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter 1st four digit number : ");
    scanf("%d",&a);
    printf("enter 2nd four digit number : ");
    scanf("%d",&b);
    printf("enter 3rd four digit number : ");
    scanf("%d",&c);
    printf("enter 4th four digit number : ");
    scanf("%d",&d);

    if(a>b&&a>c&&a>d)
    {printf("%d",a);}
    else if(b>a&&b>c&&b>d)
    {printf("%d",b);}
    else if(c>b&&c>a&&c>d)
    {printf("%d",c);}
    else if(d>b&&d>c&&d>a)
    {printf("%d",d);}

    else{
        printf("radhey radhey ji");}
}
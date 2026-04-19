//write a program check if a number is divided by 2 or not
#include<stdio.h>
int main(){
    int a,b;
    printf("the number is : ");
    scanf("%d",&a);
    b=a%2==0;//"%"it tells remender
    printf("%d\n",b);
    return 0;
    //(1/any integer=condition is true) and 0=condition is false 
}
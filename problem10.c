//write a program check if a number is even or odd
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("the number is : ");
    scanf("%d",&a);
    b=a%2==0;//"%"it tells remender
    c=b==1;//1=the condition is true
    d=b==0;//0=the condition is false
    printf("the number is even %d\n",c);
    printf("the number is odd %d\n",d);
    return 0;
    //(1/any integer=condition is true) and 0=condition is false 
}
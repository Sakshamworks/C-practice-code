#include<stdio.h>
int main(){
    float p;
    printf("enter principle for finding simple intrest:");
    scanf("%f",&p);
    float r;
    printf("enter rate for finding simple intrest:");
    scanf("%f",&r);
    float t;
    printf("enter time for finding simple intrest:");
    scanf("%f",&t);
    printf("the simple intrest is %.2f :",(p*r*t)/100);
}
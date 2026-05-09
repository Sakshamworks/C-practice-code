#include<stdio.h>
//to finding factorial
int main(){
    int a;

    printf("enter the number : ");
    scanf("%d",&a);
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("%d\n",fact);
    
    return 0;
}
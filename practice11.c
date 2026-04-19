#include<stdio.h>
int main(){
    int itssunday = 1;
    int itssnowing=1;
    printf("%d\n",itssunday&&itssnowing);

    int itsmonday=1;
    int itsraining=1;
    printf("%d\n",itsmonday||itsraining);

    int a;
    printf("enter a number :",a);
    scanf("%d",&a);
    printf("the number is %d",a>9&&a<100);//1=true and 0=false
    return 0;

}
//calculate income tax paid by an employee to the governmentas per the slabs//
#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("enter your income in lakhs : ");
    scanf("%f",&a);
    if(a>=2.5 && a<=5.0){
    printf("u paid tax to the government %f :",0.05*a);
    }
    else if(a>=5.0&&a<=10.0){
        printf(" paid tax to the government %f :",(20.00/100)*a);
    }
    else if(a>10.0)
    {
        printf("u paid tax  the government %f :",(30.00/100)*a);
    }
    return 0;
    

}
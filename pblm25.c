#include<stdio.h>
int main(){
    char a;
    printf("enter the upper case charecter : ");
    scanf("%c",&a);
    if(a>='A'&&a<='Z'){
    printf("it is upper case charecter ");
    }
    else{
        printf("it is not a upper case charecter");
    }
    return 0;
}
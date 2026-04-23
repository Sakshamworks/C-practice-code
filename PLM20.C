//uses of switch 
#include<stdio.h>
int main(){
    char day;
    printf("enter the day :");
    scanf("%s",&day);

    switch(day){
        case 's':printf("sunday\n");
        break;
        case 'm':printf("monday\n");
        break;
        case 't':printf("tuesday\n");
        break;
        case 'w':printf("wednesday\n");
        break;
        case 'h':printf("thrusday\n");
        break;
        case 'f':printf("friday\n");
        break;
        case 'x':printf("saturday\n");
        break;
        default:
    
    return 0;}
    
}
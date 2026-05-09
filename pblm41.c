#include<stdio.h>
//odd number between 5 to 50 using continue statement
int main(){
    for(int i=5;i<=50;i++){
        if(i%2==0){
            continue;
        }
        else{
            printf("%d\n",i);
        }
    }
}
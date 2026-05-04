#include<stdio.h>
int main(){
    //using for loop 
    /*int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d\n",i);
    }*/
   int n,i=0;
   printf("enter a number : ");
   scanf("%d",&n);
   //using while loop
   /*while (i<=n)
   {
    printf("%d\n",i);
    i++;
   }*/
  //using do while loop
  do{
    printf("%d\n",i);
    i++;
  }
  while (i<=n);
  

   
    return 0;
}
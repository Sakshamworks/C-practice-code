#include<stdio.h>
#include<math.h>
int main(){
    printf("%d\n",5>4&&76<98);//AND logic operator
    printf("%d\n",5>4&&76>98);//AND logic operator
    printf("%d\n",5>4||76<98);//OR logic operator
    printf("%d\n",5<4&&76<98);//OR logic operator
    printf("%d",!(5>3));//NOT logic operator
    int a=4,b=9;
    a+=b;//it also write in the form of a=a+b
    printf("%d\n",a);
    a*=b;//it also write in the form of a=a*b
    printf("%d\n",a);
    a-=b;//it also write in the form of a=a-b
    printf("%d\n",a);

    return 0;
}
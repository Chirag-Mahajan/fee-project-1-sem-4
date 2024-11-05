#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value A:");
    scanf("%d",&a);
    printf("enter the value B:");
    scanf("%d",&b);
    printf("(a+b)^2 is %d",a*a+b*b+2*a*b);
    return 0;
}
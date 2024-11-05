//write a program to count total number of notes(currency) in given amount.
#include<stdio.h>
int main(void){
    int a,b,c;
    printf("enter the amount: ");
    scanf("%d",&a);
    b=a/500;
    a=a%500;
    c=a/1;
    a=a%1;
    printf("number of notes of 500=%d",b);
    printf("\n number of notes of 1=%d",c);
    return 0;
}

//write a program to print days name according to days number using switch case.
#include<stdio.h>
int main(){
    char day;
    printf("enter day:");
    scanf("%s",&day);
    switch(day){
        case 'm':printf("monday");
               break;
        case 't':printf("tuesday");
               break;
        case 'w':printf("wednesday");
               break;
        case 'T':printf("thursday");
                break;
        case 'f':printf("friday");
                break;
        case 's':printf("saturday");
                break;
        case 'S':printf("sunday");
                break;
        default:printf("not a day");
        }
        return 0;
}
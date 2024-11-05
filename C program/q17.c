#include<stdio.h>
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(num & 1)
    {
        printf("%d is odd",num);
    }
    else
    {
        printf("%d is even",num);
    }
    return 0;
    }

// write a program to check whether year is leap or not.
#include<stdio.h>
int main()
{
    int y,year;
    printf("enter year: ");
    scanf("%d",&y);
    if((y%400==0)|| (y%4==0 && y%100!=0))
    {
        printf("Leap year.");
    }
    else
    {
        printf("Not a leap year.");
    }
    return 0;
}   

// write a program to convert lower to upper case.
#include<stdio.h>
int main(){
    char a;
    printf("Enter character: ");
    scanf("%c",&a);
    int b = a;
    if (b>=97)
    {
        b=b-32;
        printf("%c",b);
    }
    else  
    {
        printf("upper case");
    }
}

//write a program to check whwther character input is small or capital
#include<stdio.h>
int main(void){
    char ch,a;
    printf("Enter character:");
    scanf("%c,&ch");
    if (ch>='a'&& ch<='z')
    {
        printf("small alphabet");
    }
    else{
        printf("capital alphabet");
    }
    return 0;
}

//write a program to find sum of digits,
#include<stdio.h>
int main (){
    int n,q,s,r;
    s=0;
    printf("Enter any value of n: ");
    scanf("%d",&n);
    while(n>0)
    {
        q=n/10;
        r=n%10;
        s=s+r;
        n=q;
    }
    printf("Sum of digits=%d",s);
    return 0;

}

// write a program to reverse a digit.
#include<stdio.h>
int main (){
    int n,rev,r;
    rev=0;
    printf("enter any value of n: ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("reverse of a number=%d",rev);
    return 0;
}
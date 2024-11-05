//write a program to enter basic salary and calculate gross salary of an employee according to given condition.
#include<stdio.h>
int main()
{
    int bs;
    double gs;
    printf("Enter basic salary: ");
    scanf("%d",&bs);
    if (bs<=1000)
    {
        gs = bs+bs*0.2+bs*0.8;
    }
    else if (bs>=10000 && bs<=20000)
    {
        gs = bs+bs*0.25+bs*0.9;
    }
    else
    {
        gs = bs+bs*0.3+bs*0.95;
    }
    printf("Gross salary = %2f",gs);
 }

//write a program to get output
#include<stdio.h>
int main()
{
    int n;
    for( int n=2 ; n<=10;n=n+2)
    {
        printf("\n%d",n);
    }
    return 0;
}

//wap
#include<stdio.h>
int main (){
    int a=2,b=5;
    (a&b) ? printf("False\n") : printf("True\n");
    (a&&b)? printf("False") : printf("True");
    return 0;
}

//wap to generate table in given format. number will be entered by the user.
#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    for(int i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n",a,i,a*i);}

}  

//write a program  to print sum of first 10 natural numbers.
#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    int sum=0;
    for (int i =1;i<=10;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}

// write a program in c to display the cube of the number up to given n integer.
#include<stdio.h>
void main(){
    int a;
    for(int i=1; i<=10; i++)
    {
        printf("%d x %d x %d = %d\n",i,i,i,i*i*i);}

}  

//write a program to take input as given below and print it as given format.
//sample input
//21.6666
//sample output 
//21.67 
//21.6666
//21.666600
#include<stdio.h>
void main(){
    float n;
    printf("enter a number:");
    scanf("%f",&n);
    printf("%.2f\n",n);
    printf("%.4f\n",n);
    printf("%2f\n",n);
    return 0;
}
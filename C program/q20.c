//write a program in c to display the n terms of odd natural numbers and their sum.
// #include<stdio.h>
// void main(){
//     int n,a=1,sum;
//     printf("enter any value of n:");
//     scanf("%d",&n);
//     for( int i=1;i<=n;i++)
//     {
//         printf("%d\n",a);
//         sum=sum+a;
//         a=a+2;
//     }
//     printf("Sum = %d",sum);
// }

//wap 
// #include<stdio.h>
// int main (){
//     int j=1;
//     while (j+=2,j<=10)
//     {
//         printf("%d",j);
//     }
//     printf("%d",j);
// }

//write a program to enter any number and find the sum of first and last digit of the number.
//567
//5+7=12
// #include<stdio.h>
// void main ()
// {
//     int n,l;
//     scanf("%d",&n);
//     l=n%10;
//     while(n>=10)
//     {
//         n/=10;
//     }
//     printf("Sum= %d",(n+l));
// }

//write a program to give grades to a student.
// marks < 30 is C 
// 30<= marks <=70 is B
// 70 <= marks <=90 is A
// 90 <= marks <=100 is A+
#include <stdio.h>
int main (){
    int marks;
    printf("Enter marks(0-100):");
    scanf("%d",&marks);
    if(marks < 30){
        printf(" c");
    }else if (30 <= marks && marks<=70){
        printf(" b");
    }else if (70 <= marks && marks <=90){
        printf("a");
    }else if (90 <= marks && marks <=100){
        printf("a+");
    }else{
        printf("wrong marks");
    }
    return 0;     
 }

// write a program to print n natural numbers using for loop.
#include<stdio.h>
int main (){
    int i,n;
    for ( int i=1 ; i<=10 ; i++)
    scanf("%d",i);
    printf("Sum of n natural numbers:");
    return 0;

}
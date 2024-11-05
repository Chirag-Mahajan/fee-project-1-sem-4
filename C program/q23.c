//write a program to display pattern.
// #include<stdio.h>
// void main()
// {
//     int n,m=1;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d ",m);
//             m++;
//         }
//         printf("\n");
//     }
// }


//write a program to display star pattern.
// #include<stdio.h>
// void main()
// {
//     int n,m;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     m=n;
//     for (int i=1;i<=n;i++)
//     {
//         for (int k=1;k<=m;k++)
//         {
//             printf(" ");
//         }
//         for (int j=1;j<=i;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//         m--;
//     }
// }

//write a program to display pattern.
// #include<stdio.h>
// void main()
// {
//     int n,m,k=0;
//     printf("enter n:");
//     scanf("%d",&n);
//     m=n;
//     for(int i=1;i<=n;i++)
//     {
//         for (int j=1;j<=m;j++)
//             printf(" ");
//         for (int j=1;j<=i;j++)
//             printf("%d ",++k);
//         m--;
//         printf("\n");
//     }
// }



//write a program using function strncpy.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[25] , str2[25];
//     int n;
//     printf("enter string :");
//     gets(str1);
//     printf("enter no. of character to be copy:");
//     scanf("%d",&n);
//     strncpy(str2, str1, n);
//     printf("value of str2 is: %s",str2);

// }



//write a program using mathematical function.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int b;
//    abs(number)- Returns the absolute value of the number
    b=abs(10);
    printf("abs() function, %d",b);
//    ceil(number)- Rounds up the number . Returns number greater than or equal to the given number
    b=ceil(4.56);
    printf("\nceil() function, %d",b);
//    floor(number)- Rounds up the number . Returns number less than or equal to the given number
    b=floor(4.56);
    printf("\nfloor() function, %d",b);
//    pow(d1,d2)- Returns the number power
    b=pow(10,2);
    printf("\npow() function, %d",b);
//    sqrt(number)- Returns square root of the number
    b=sqrt(4);
    printf("\nsqrt() function, %d",b);
}


//write a program
// #include<stdio.h>
// #include<ctype.h>
// int main()
// {
//     printf("%d",abs(-12));
//     printf("\n%.2f",ceil(3.6));
//     printf("\n%.2f",ceil(3.3));
//     printf("\n%.2f",floor(3.6));
//     printf("\n%.2f",floor(3.3));
//     printf("\n%.2f",sqrt(16));
//     printf("\n%.2f",sqrt(7));
//     printf("\n%.2f",pow(2,4));
//     printf("\n%.2f",pow(3,3));
//     return 0;
// }
//write a program to display menu as given below and perform operation according to the menu.
// #include<stdio.h>
// void main ()
// {
//     int a,b,n;

//     while(1)
//     {
//         printf("________MENU_______\n");
//         printf("1.Addition\t 0. Exit");
//         printf("\n_______________\n");
//         printf("Enter your choice: ");
//         scanf("%d",&n);
//         if (n==1)
//         {
//             printf("Enter a: ");
//             scanf("%d",&a);
//             printf("Enter b: ");
//             scanf("%d",&b);
//             printf("Sum = %d\n",(a+b));
//         }
//         else if (n==0)
//             break;
//         else
//             printf("Invalid Choice\n");
//     }

// }





//write a program to take time between 6;00AM to 8:00PM from the user and print the output.
// #include<stdio.h>
// void main (){
    
// }





//write a program to enter year and month and count the total days till december.
#include<stdio.h>
void main (){
    int y,m,d=0,fd;
    printf("Enter year and month:");
    scanf("%d %d",&y,&m);
    if(y%400==0 || (y%4==0 && y%100!=0))
      fd=29;
    else
      fd=28;
    if (m==0)
      printf("invalid month");
    else
    {
        for (int i=1;i<=7;i++)
        {
            if((i>=m) && (i%2!=0))
              d+=31;
            else if (i>=m)
        {
            if (i==2)
                d+=fd;
            else
                d+=30;
        }
        }
        for (int i=8;i<=12;i++)
        {
            if ((i>m) && (i%2!=0))
                d+=30;
            else if (i>=m)
                d+=31;
        }
        printf("Days = %d",d);
       }
}
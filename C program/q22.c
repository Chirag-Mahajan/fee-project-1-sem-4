//nested for loop
// #include<stdio.h>
// void main()
// {
//     int n;
//     puts("Enter n: ");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++)
//     {
//         for (int j=1;j<=10;j++)
//         {
//             printf("%d\t",(i+j));
//         }
//         printf("\n");
//     }
// }

//write a program to display pattern.
// #include<stdio.h>
// void main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }


//write a program to display pattern.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}



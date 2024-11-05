#include<stdio.h>
void main()
{
    int arr[2][3]={{10,20,30},{40,50,60}},x=sizeof(arr)/sizeof(arr[0]),y=sizeof(arr[0])/sizeof(arr[0][0]),sum;
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
            printf("%d",arr[i][j]);
        printf("\n");
    }
    for (int j=0;j<y;j++)
    {
        sum=0;
        for (int i=0;i<x;i++)
            sum+=arr[i][j];
        printf("%d",sum);
    }
}
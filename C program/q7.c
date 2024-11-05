#include<stdio.h>
int main()
{
   int p,m,c,e,r;
   float res;
   printf("enter marks in phy-->");
   scanf("%d",&p);
   printf("enter marks in maths-->");
   scanf("%d",&m);
   printf("enter marks in chem-->");
   scanf("%d",&c);
   printf("enter marks in eng-->");
   scanf("%d",&e);
   r=p+c+m+e;
   res=r/4;
   printf("total =%d",r);
   printf("\navg =%f",res);
   
   

    return 0;
}
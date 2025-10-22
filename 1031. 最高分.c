#include<stdio.h>
int main()
{
    int a,n=0;

   while(1)
   {
       scanf("%d",&a);

       if(a<0)
       {
           break;
       }

       if(a>n)
       {
           n=a;
       }

   }


    printf("%d",n);


    return 0;
}


#include <stdio.h>
int main()
{
     int a=0,n;
     scanf("%d",&n);
while(n!=1)

  {
     if(n%2!=0 )
     {
         n=(3*n+1)/2;

     }

     else
     {
         n=n/2;

     }
         a++;
  }
     printf("%d",a);

     return 0;
}


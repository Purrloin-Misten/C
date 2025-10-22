
#include <stdio.h>
int main()
{


    long long n,sum=0,a=1;
    int m=1;
    scanf("%lld",&n);
   while(sum<=n)
   {
       a*=m;
       sum+=a;
       m++;
   }



    printf("m<=%d",m-2);
      return 0;
}


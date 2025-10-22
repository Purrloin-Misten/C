#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x,s;
    int i,m;
    long long a=1;
    m=0,s=0.0;
    scanf("%lf",&x);
     for(i=1;i<=19;i++)
   {
        a*=i;

        if(i%2!=0)
      {
            m+=1;

             if(m%2!=0)
             {
              s+=(pow(x,i))/a;
             }

             else
             {
              s-=(pow(x,i))/a;
             }
      }

   }

    printf("%.3lf",s);

         return 0;
}


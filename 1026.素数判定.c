#include <stdio.h>
int main()
{

    int n,i,m;
    scanf("%d",&n);
   m=0;

   if(n==1)
    {
        printf("No");
    }

   else if(n==2)
    {
       printf("Yes");
    }

   else
    {
        for(i=2;i<=n-1;i++)
        {

        if(n%i==0)
        {
            m++;
        }
        }
        if(m==
           0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
   }
      return 0;
}


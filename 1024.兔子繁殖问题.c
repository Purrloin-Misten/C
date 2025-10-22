#include <stdio.h>
int main()
{

    int n,i;
    int m[45];
    m[1]=1;
    m[2]=1;
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        m[i]=m[i-1]+m[i-2];

    }
      printf("%d\n",m[n]);

         return 0;
}


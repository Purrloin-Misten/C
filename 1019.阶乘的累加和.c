#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    int a=1,sum=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        a*=i;
        sum+=a;

    }
         printf("%d\n",sum);
        return 0;
}


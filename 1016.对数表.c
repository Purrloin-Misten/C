#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int m,n,i;
    scanf("%d %d",&m,&n);
     for(i=m;i<=n;i++)
    {

       printf("%4d%8.4lf\n",i,log(i));
    }

    return 0;
}

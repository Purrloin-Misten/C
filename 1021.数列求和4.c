#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,a,x,i,m=0;
    scanf("%d %d",&n,&a);
    x=a;
    for(i=0;i<n;i++)
    {

        m+=a;
        a=a*10+x;

    }
      printf("%d",m);
    return 0;
}

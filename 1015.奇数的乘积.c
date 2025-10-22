#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,a,i;
    a=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(m%2!=0)
        {
            a*=m;
        }
    }
    printf("%d",a);
    return 0;
}


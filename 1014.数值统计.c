#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,a,b,c,i;
    a=0,b=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);

     if(m<0)
        {
            a++;
        }

        else if(m==0)
        {
            b++;
        }

        else
        {
            c++;
        }
    }
    printf("%d %d %d",a,b,c);
    return 0;
}

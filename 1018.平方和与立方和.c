#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,x,y,i;
    x=0,y=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%2!=0)
        {
            y+=i*i*i;
        }
        else
        {
            x+=i*i;
        }
    }
    printf("%d %d",x,y);
    return 0;
}



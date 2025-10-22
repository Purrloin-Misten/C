#include<stdio.h>
int main()
{
    int n,m,min,i,max;
    scanf("%d %d",&m,&n);
    min=m;
    max=n;
    if(n<m)
    {
        min=n;
        max=m;
    }
    while(min!=0)
    {
        i=max%min;
        max=min;
        min=i;
    }
    printf("%d",max);
    return 0;
}


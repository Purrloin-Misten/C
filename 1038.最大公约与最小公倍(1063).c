#include<stdio.h>
int main()
{
    int n,m,min,i,max,a,b;
    scanf("%d %d",&m,&n);

    min=m;
    max=n;
    if(n<m)
    {
        min=n;
        max=m;
    }


    b=min;
    a=max;


    while(min!=0)
    {
        i=max%min;
        max=min;
        min=i;
    }

    long long c=(long long)a*b/max;

    printf("%d %lld",max,c);
    return 0;
}


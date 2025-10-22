#include<stdio.h>
int main()
{
    int n,i,a,m;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<n;i++)
    {
        scanf("%d",&a);
        if(a>m)
        {
            m=a;
        }
    }
    printf("%d\n",m);
    return 0;
}

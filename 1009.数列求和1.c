#include <stdio.h>
#include <stdlib.h>
int main()
{
    double n,a,sum=0,i;
    scanf("%lf",&n);
    for(i=0;i<n;i++)
    {
        a=1/(2*i+1);
        sum += a;
    }
    printf("%.2lf\n",sum);
    return 0;
}

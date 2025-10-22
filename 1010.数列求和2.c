#include <stdio.h>
#include <stdlib.h>
int main()
{
    double n,a,sum=0;
    int i;
    scanf("%lf",&n);
    for(i=0;i<n;i++)
    {
        a=1.0/(2*i+1);
        if(i % 2 == 0)
        {
           sum += a;
        }
        else
        {
            sum -= a;
        }
    }
    printf("%.2lf\n",sum);
    return 0;
}

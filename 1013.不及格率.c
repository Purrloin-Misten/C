#include <stdio.h>
#include <stdlib.h>
int main()
{
    double n,c,a=0,i;
    scanf("%lf",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&c);
        if(c<60)
        {
            a++;
        }

    }
    double l=a/n;
    printf("%.2lf\n",l);
    return 0;
}


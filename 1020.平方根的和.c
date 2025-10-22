#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
        double item,sum=0.00;
        int i,n;
        scanf("%lf %d",&item,&n);
        for (i=0;i<n;i++)
        {
            sum+=item;
            item=sqrt(item);

        }
        printf("%.2lf",sum);
        return 0;
}


#include <stdio.h>

int main() {
    int x,y,z,n,i;
    int total[n];
    double m=0;
       scanf("%d",&n);

        for(i = 0; i < n; i++)
        {
        scanf("%d %d %d", &x, &y, &z);
        double h=x/8.0;
        double total=x;

        if(y>0)total+=y*h*2;
        if(total>z)total=z;
        if(total>m)m=total;
        }



    printf("%.1lf\n", m);

    return 0;
}


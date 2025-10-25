#include <stdio.h>

int main()
{
    int t0,m;

    scanf("%d %d", &t0,&m);

    int my=m+t0%100;
    int h=my/60;
    int t=t0/100+h*100+my%60;



    printf("%d\n",t);

    return 0;
}



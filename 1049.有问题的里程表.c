#include <stdio.h>
#include <math.h>
int main() {

    int num,i;
    double s=0;

    scanf("%d",&num);
    int m =(int)log10(num)+1;
    int a[5];

    for(i=0;i<m;i++)
    {
        a[i]=num%10;
        num/=10;
        if(a[i]<4)
        {
            s+=a[i]*(pow(9,i));
        }
        else if(a[i]>4)
        {
            s+=(a[i]-1)*(pow(9,i));
        }
    }

    printf("%.0f",s);


    return 0;
}


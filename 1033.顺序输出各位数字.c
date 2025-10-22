#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a=0,x;
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
        a++;
        m=m/10;
    }
    m=n;
    while(a>0)
    {
        x=m/(int)pow(10,a-1);
        printf("%d ",x);
        m=m%(int)pow(10,a-1);
        a--;
    }


    return 0;
}


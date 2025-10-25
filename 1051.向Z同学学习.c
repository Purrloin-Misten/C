#include <stdio.h>

int main() {

    int M,k,d,a=0;
    scanf("%d %d",&M,&k);

    for(d=1;;d++)
    {

         a++;
        M-=1;
        if (a==k)
        {
            M+=1;
            a=0;
        }
        else if(M==0)break;

    }


    printf("%d",d);


    return 0;
}

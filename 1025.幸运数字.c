#include <stdio.h>
int main()
{

    int n,i,m,x,s;
    x=0,s=0;
    scanf("%d %d",&m,&n);
    for(i=n;i>=m;i--)
    {
        if(i%7==0 && i%4!=0)
        {
            s=i;
            x=1;
            break;
        }

    }
      if(x==0)

{
    printf("no");
}

       else{ printf("%d\n",s);}

         return 0;
}


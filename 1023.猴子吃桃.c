#include <stdio.h>
int main()
{
    int n,s=1,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        s = (s+1)*2 ;
    }
      printf("%d",s);

         return 0;
}

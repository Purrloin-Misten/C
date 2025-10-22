#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a,b;
    srand((unsigned)time(NULL));
    a=rand()%100;
    while (1)
    {
        scanf("%d",&b);
        if(b>a){printf("大了，请继续\n");}
        if(b<a){printf("小了，请继续\n");}
        if(b==a){printf("恭喜你，答对了！\n");
        break;}
    }

    return 0;
}

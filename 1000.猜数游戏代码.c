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
        if(b>a){printf("���ˣ������\n");}
        if(b<a){printf("С�ˣ������\n");}
        if(b==a){printf("��ϲ�㣬����ˣ�\n");
        break;}
    }

    return 0;
}

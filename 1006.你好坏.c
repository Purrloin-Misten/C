#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a,b,sum;
    srand((unsigned)time(NULL));
    sum=6;
    a=rand()%100;
    while(1)
  {
    sum--;
    scanf("%d",&b);
    if(b>a){printf("���ˣ���ʣ��%d�λ���\n");}
    if(b<a){printf("С�ˣ���ʣ��%d�λ���\n");}
    if(b==a){printf("��ϲ�㣬����ˣ�\n");
    system("shutdown -a");
    break;}

    if(sum==0){printf("û�л����ˣ�ϵͳ����50���ػ�\n");
    system("shutdown -s -t 50");
    break;}
  }
   system("pause");
   return 0;
}

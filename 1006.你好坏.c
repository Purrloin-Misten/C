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
    if(b>a){printf("大了，还剩下%d次机会\n");}
    if(b<a){printf("小了，还剩下%d次机会\n");}
    if(b==a){printf("恭喜你，答对了！\n");
    system("shutdown -a");
    break;}

    if(sum==0){printf("没有机会了，系统将在50秒后关机\n");
    system("shutdown -s -t 50");
    break;}
  }
   system("pause");
   return 0;
}

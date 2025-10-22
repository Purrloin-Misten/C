#include <stdio.h>//引入标准输入输出库，用于使用 getchar()和putchar() 等函数
#include <ctype.h>
int main()
{
    char ch;
    int i=0;
    while ((ch = getchar()))
        {
            scanf("%c",ch);
        }
        if (isdigit(ch))
        {
            i++;
        }
        printf("%d",i);
        return 0;
}

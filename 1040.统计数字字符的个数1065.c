#include <stdio.h>//�����׼��������⣬����ʹ�� getchar()��putchar() �Ⱥ���
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

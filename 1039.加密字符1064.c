#include <stdio.h>//�����׼��������⣬����ʹ�� getchar()��putchar() �Ⱥ���
#include <ctype.h>//�����ַ�����⣬����ʹ�� isalpha()��tolower()�Ⱥ���

int main() {
    char ch;

    while ((ch = getchar()) != '@')//getchar()���ӱ�׼�����ȡһ���ַ�
    {
        if (isalpha(ch))//isalpha(ch)���ж��ַ� 'ch' �Ƿ���Ӣ����ĸ��A-Z �� a-z��
        {
            ch = tolower(ch);//tolower(ch)������ĸת��ΪСд��ʽ

            if (ch >= 'a' && ch <= 'y')
            {
                ch = ch + 1;
            }

            else if (ch == 'z')
            {
                ch = 'a';
            }
        }

        putchar(ch);//����������ַ��������Ǽ��ܺ����ĸ��Ҳ������δ�ı�������ַ���
    }

    printf("\n");
    return 0;
}

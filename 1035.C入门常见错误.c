#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    switch (n)
    {
        case 1:
            printf("��ȡ�������벻д&");
            break;
        case 2:
            printf("�ж����д��=");
            break;
        case 3:
            printf("��������д;");
            break;
        case 4:
            printf("����double����ʹ��%%d");
            break;
        case 5:
            printf("������ʹ�����ķ���");
            break;
        case 6:
            printf("��ȡ����ֵд�ڱ�����ʼ�����ǰ");
            break;
        case 7:
            printf("��ͨ��������������õ�С��");
            break;
        default:
            printf("Error\n");
            break;
    }

    return 0;
}

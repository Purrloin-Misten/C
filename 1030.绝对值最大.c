#include<stdio.h>
#include<stdlib.h>  // ʹ�� abs() ��������

int main()
{
    int a, b, c;
    int max;
    scanf("%d %d %d", &a, &b, &c);

    max = abs(a);
    if (abs(b) > max) max = abs(b);
    if (abs(c) > max) max = abs(c);

    printf("%d", max);
    return 0;
}

#include <stdio.h>

int main()
{
    int c;
    double m;
    scanf("%d", &c);

    m = c / 100.0;  // ʹ��100.0��ǿ�Ƹ���������

    double total_feet = m / 0.3048;
    int foot = (int)total_feet;
    int inch = (int)((total_feet - foot) * 12);

    printf("%d %d\n", foot, inch);

    return 0;
}


/*
PTA������Ŀֱ��ն����δ��������

#include <stdio.h>

int main()
{
    int c;
    double m;
    scanf("%d", &c);

    m = c / 100.0;  // ʹ��100.0��ǿ�Ƹ���������

    double total_feet = m / 0.3048;
    int foot = (int)total_feet;
    int inch = (int)((total_feet - foot) * 12 + 0.5);  // +0.5������������

    printf("%d %d\n", foot, inch);

    return 0;
}
*/

#include <stdio.h>

int main()
{
    int c;
    double m;
    scanf("%d", &c);

    m = c / 100.0;  // 使用100.0来强制浮点数除法

    double total_feet = m / 0.3048;
    int foot = (int)total_feet;
    int inch = (int)((total_feet - foot) * 12);

    printf("%d %d\n", foot, inch);

    return 0;
}


/*
PTA上面题目直接斩除，未四舍五入

#include <stdio.h>

int main()
{
    int c;
    double m;
    scanf("%d", &c);

    m = c / 100.0;  // 使用100.0来强制浮点数除法

    double total_feet = m / 0.3048;
    int foot = (int)total_feet;
    int inch = (int)((total_feet - foot) * 12 + 0.5);  // +0.5用于四舍五入

    printf("%d %d\n", foot, inch);

    return 0;
}
*/

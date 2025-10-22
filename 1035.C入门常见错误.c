#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    switch (n)
    {
        case 1:
            printf("读取键盘输入不写&");
            break;
        case 2:
            printf("判断相等写成=");
            break;
        case 3:
            printf("语句结束不写;");
            break;
        case 4:
            printf("输入double类型使用%%d");
            break;
        case 5:
            printf("代码中使用中文符号");
            break;
        case 6:
            printf("读取变量值写在变量初始化语句前");
            break;
        case 7:
            printf("想通过两个整数相除得到小数");
            break;
        default:
            printf("Error\n");
            break;
    }

    return 0;
}

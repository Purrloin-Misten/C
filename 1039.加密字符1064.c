#include <stdio.h>//引入标准输入输出库，用于使用 getchar()和putchar() 等函数
#include <ctype.h>//引入字符处理库，用于使用 isalpha()和tolower()等函数

int main() {
    char ch;

    while ((ch = getchar()) != '@')//getchar()：从标准输入读取一个字符
    {
        if (isalpha(ch))//isalpha(ch)：判断字符 'ch' 是否是英文字母（A-Z 或 a-z）
        {
            ch = tolower(ch);//tolower(ch)：将字母转换为小写形式

            if (ch >= 'a' && ch <= 'y')
            {
                ch = ch + 1;
            }

            else if (ch == 'z')
            {
                ch = 'a';
            }
        }

        putchar(ch);//输出处理后的字符（可能是加密后的字母，也可能是未改变的其他字符）
    }

    printf("\n");
    return 0;
}

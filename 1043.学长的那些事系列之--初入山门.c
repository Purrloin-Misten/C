#include <stdio.h>
#include <string.h>

int main() {
    char ch;
    int count,i;
    int r = 0, g = 0, o = 0;
    int total = 0;

    for( i = 0; i < 3; i++) {
        scanf("%c %d", &ch, &count);

        if(ch == 'r')
        {
            r = count;
        }
        else if(ch == 'g')
        {
            g = count;
        }
        else if(ch == 'o')
        {
            o = count;
        }
        total += count;
    }


    int accuracy = (g* 100) / total;

    printf("%d\n", accuracy);

    return 0;
}

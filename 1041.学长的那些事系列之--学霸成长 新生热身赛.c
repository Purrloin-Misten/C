#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    int m,n,i;

    scanf("%s", s);
    scanf("%d %d", &m, &n);

    int countB = 0, countG = 0;

    for ( i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'B')
        {
            countB++;
        }

        else if (s[i] == 'G')
        {
            countG++;
        }
    }


    int a = countB * m;
    int b = countG * n;


    if (a >b)
    {
        printf("B\n");
    }

    else if (a < b)
    {
        printf("G\n");
    }

    else
    {
        printf("Happy\n");
    }

    return 0;
}

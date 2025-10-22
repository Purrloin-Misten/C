#include <stdio.h>

int main() {
    int x, y;
    int s1, s2, s3;
    int total1 = 0, total2 = 0, total3 = 0;
    int i;
       scanf("%d %d", &x, &y);

        for(i = 0; i < 10; i++) {
        scanf("%d %d %d", &s1, &s2, &s3);
        total1 += s1;
        total2 += s2;
        total3 += s3;
    }

    int z = 0;

    if(total1 < x)
    {
        z = total1;
    }
    else if(total2 < y)
    {
        z = total1 + total2;
    }
    else
    {
        z= total1 + total2 + total3;
    }

    printf("%d\n", z);

    return 0;
}


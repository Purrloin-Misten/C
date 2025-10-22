#include <stdio.h>
#include <stdlib.h>
int main()
{
    double s1,s2;
    char op;
    scanf("%lf %c %lf",&s1,&op,&s2);
    switch(op)
    {
    case'+':
        printf("%.2lf\n",s1+s2);
        break;
    case'-':
        printf("%.2lf\n",s1-s2);
        break;
    case'*':
        printf("%.2lf\n",s1*s2);
        break;
    case'/':
        if(s2==0)
        {
            printf("Wrong input!\n");
        }
        else
        {
            printf("%.2lf\n",s1/s2);
        }
        break;
    default:
        printf("Wrong input!\n");
        break;
    }
    return 0;
}

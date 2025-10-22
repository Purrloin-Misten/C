#include<stdio.h>
int main()
{
    int h,m,s,A,B,S,min;
    scanf("%d:%d:%d\n",&h,&m,&s);
    A=s+m*60+h*3600;
    scanf("%d:%d:%n",&h,&m,&s);
    B=s+m*60+h*3600;
    scanf("%d:%d:%d\n",&h,&m,&s);
    C=s+m*60+h*3600;

    min = A;

    if(B<min)
        min=B;

    if(C<min)
        min=C;






    return 0;
}

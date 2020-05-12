#include<stdio.h>

int main()
{
    int x,y=0,m=0,d=0;
    scanf("%d", &x);

    while(x>=365)
    {
        y++;
        x=x-365;

    }
    while(x>=30)
    {
        m++;
        x=x-30;

    }
    while(x>=1)
    {
        d++;
        x=x-1;

    }


   printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y,m,d);
    return 0;
}

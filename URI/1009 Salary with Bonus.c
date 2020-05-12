#include<stdio.h>

int main()
{
    char x[100];
    double a,b,c,d,s;
    b=0.0;
    gets(x);
    scanf("%lf %lf", &d,&s);
    a=s*(15.0/100.0);
    b=d+a;

    printf("TOTAL = R$ %.2lf\n",d+a);



    return 0;
}

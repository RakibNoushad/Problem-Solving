#include<stdio.h>

int main()
{
    int a,b,c;
    double x,y,z;
    scanf("%lf", &x);
    if(x>=0 && x<=400)
    {
        y=x*0.15;
        a=15;
    }
    else if(x>400 && x<=800)
    {
        y=x*0.12;
        a=12;
    }
    else if(x>800 && x<=1200)
    {
        y=x*0.10;
        a=10;
    }
    else if(x>1200 && x<=2000)
    {
        y=x*0.07;
        a=7;
    }
    else
    {
        y=x*0.04;
        a=4;
    }
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",x+y,y,a);





    return 0;
}


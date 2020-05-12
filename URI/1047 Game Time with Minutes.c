#include<stdio.h>

int main()
{
    int a,b,c,p,q,d;
    double x,y,z;
    scanf("%d %d %d %d", &a, &p, &b, &q);
    if(a>=b)
    {
        if(p>q)
            {d=(60-p)+q;
            c=(24-a)+(b-1);}
        else
            {d=q-p;
            c=(24-a)+b;}
    }
    else
    {
        if(p>q)
            {d=(60-p)+q;
            c=b-(a+1);}
        else
            {d=q-p;
            c=b-a;}
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c,d);






    return 0;
}


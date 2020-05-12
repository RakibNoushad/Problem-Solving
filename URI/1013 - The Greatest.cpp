#include <stdio.h>

int main()
{
    long long int n,m,i=0,j,q,y,aa,bb,f=0,k,min=10000010,t,r,s=0,u;
    double div, ek, dui;
    char a[100010];
        scanf("%lld %lld %lld", &n,&m,&q);
        if(n>=m)
            y=n;
        else y=m;

            if(q>=y) y=q;

        printf("%lld eh o maior\n",y);


    return 0;
}

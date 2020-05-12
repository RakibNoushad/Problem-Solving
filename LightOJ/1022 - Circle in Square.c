#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    //char a[1100];
    const double PI=2*acos(0);
    int t,i;
    double j,r,s,a,b,c,o;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf",&s);
        a=s*s;
        b=4*a;
        c=PI*a;
        o=b-c;
        printf("Case %d: %.2lf\n",i,o);

    }


    return 0;
}

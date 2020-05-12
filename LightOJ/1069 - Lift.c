#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//int max(int m,int n);


int main()
{
    int o,t,i,j,n,m,s=0;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&n,&m);
        if(n>m)
            o=n-m;
        else
            o=m-n;
        s=(4*o)+(4*n)+9+10;
        printf("Case %d: %d\n",i,s);


    }

    return 0;
}

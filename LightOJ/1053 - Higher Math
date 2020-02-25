#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//int max(int m,int n);


int main()
{
    long long int a,b,k,to,c;
    int o,t,i,j,n,m;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&n,&m,&o);
        a=o*o;
        b=n*n;
        c=m*m;
        if(o>=n && o>=m)
        {
            if(a==b+c)
                printf("Case %d: yes\n", i);
            else
                printf("Case %d: no\n", i);
        }
        else if(n>=o && n>=m)
        {
            if(b==a+c)
                printf("Case %d: yes\n", i);
            else
                printf("Case %d: no\n", i);
        }
        else
        {
            if(c==a+b)
                printf("Case %d: yes\n", i);
            else
                printf("Case %d: no\n", i);
        }



    }

    return 0;
}

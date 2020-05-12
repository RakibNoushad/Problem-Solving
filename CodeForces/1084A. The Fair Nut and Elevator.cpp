#include <bits/stdc++.h>
using namespace std;
 
//long long int jog(long long int n);
//long long int ;
 
int main()
{
    int f[1000], g[10000];
    int n,m,k,l,r,q,s,i,j,a,len,b,c,d,count=0;
    long long int min=10000000,sum=0;
 
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &f[i]);
    }
    for(i=1; i<=n; i++)
    {
        sum=0;
        for(j=1; j<=n; j++)
        {
            r=i-j;
            if(r<0)
                r=r*-1;
            r=r+(j-1)+(i-1);
            sum=sum+(r*f[j]);
            r=i-1;
            s=j-i;
            if(s<0)
                s=s*-1;
            r=r+(j-1)+s;
            sum=sum+(r*f[j]);
 
//1printf("%d\n", sum);
        }
 
 
        //g[i]=sum;
        if(sum<=min)
            min=sum;
    }
    printf("%lld\n", min);
 
    return 0;
}

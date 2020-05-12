#include<stdio.h>
#include<string.h>
 
int main()
{
    long long int a,b,c,d,s,n,f,i,t;
    scanf("%lld", &n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        d=s/c;
        f=(d/a);
        t=f*b;
        printf("%lld\n", d+t);
 
 
    }
 
    return 0;
}

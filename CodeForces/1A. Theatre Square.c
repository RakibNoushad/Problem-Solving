#include<stdio.h>
 
int main()
{
    long long int m,n,a,i,j;
    scanf("%lld %lld %lld", &m,&n,&a);
    if(m%a==0)
        i=m/a;
    else
        i=(m/a)+1;
 
    if(n%a==0)
        j=n/a;
    else
        j=(n/a)+1;
 
    printf("%lld\n", i*j);
 
 
 
    return 0;
}

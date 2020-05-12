#include <bits/stdc++.h>
using namespace std;
 
//long long int jog(long long int n);
//long long int ;
 
int main()
{
   // int f[1000], g[10000];
   long long int n,m,k,i,j;
   long long int min=10000000,sum=0;
 
    scanf("%lld %lld", &n, &k);
 
    for(i=1;i<=k;i++)
    {
        if(n%10!=0)
            n--;
        else
            n=n/10;
    }
 
    printf("%lld\n", n);
 
    return 0;
}

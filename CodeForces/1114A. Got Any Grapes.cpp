#include <bits/stdc++.h>
using namespace std;
 
//long long int jog(long long int n);
//long long int ;
int a[100000];
 
int main()
{
    int f[100000], g[100000];
    int n,w,h,L,m,k,i,j,s,o,x,y,z,a,b,c;
    int max=0,sum=0;
 
    scanf("%d %d %d %d %d %d", &x, &y, &z, &a, &b, &c );
 
    if(a>=x)
    {
       a=a-x;
       n=a+b;
       if(n>=y)
       {
           n=n-y;
           w=n+c;
           if(w>=z)
           {
               printf("YES\n");
           }
           else
           {
               sum++;
           }
       }
       else
       {
           sum++;
       }
    }
    else
        sum++;
 
    if(sum>0)
        printf("NO\n");
    return 0;
}

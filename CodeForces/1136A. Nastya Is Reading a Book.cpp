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
 
    scanf("%d", &n );
    for(i=0;i<n;i++)
    {
        scanf("%d %d", &f[i], &g[i]);
 
    }
    scanf("%d", &k);
 
   for(i=0;i<n;i++)
    {
        if(k>=f[i] && k<=g[i])
        {
            s=n-i;
            break;
        }
 
 
 
    }
    printf("%d\n", s);
 
 
    return 0;
}

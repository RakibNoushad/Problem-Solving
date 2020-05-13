#include<bits/stdc++.h>
using namespace std;
char c[10010];
 
int main()
{
    long long int n,m,i,j,q,s=0,k,miny=1000000010,r,t,x,y,aa;
    //int a[10010],b[10010];
    cin >> t;
    while(t--)
    {
        cin >> n >> x >> y;
        k=2*x;
        aa=n/2;
        //printf("%lld\n",aa);
        if(k<=y)
        {
            n=x*n;
        }
        else
        {
            if(n%2==0)
                n=aa*y;
            else
            {
                n=aa*y;
                n=n+x;
            }
 
        }
        printf("%lld\n",n);
    }
 
 
    return 0;
}
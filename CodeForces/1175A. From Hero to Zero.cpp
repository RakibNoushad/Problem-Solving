#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ulli;
typedef long long int  lli;
 
#define SQR(x) ((x)*(x))
 
 
char a[200010],c[200010];
//int x[200010],y[200010],z[200010];
 
int main()
{
    ulli n, m, t, i, j,k,f=0;
    long long int ans=0;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        f=0;
    while(n)
    {
        if(n%k)
        {
            f+=(n%k);
            n-=(n%k);
        }
        else
        {
            n/=k;
            f++;
        }
    }
    cout << f << endl;
    }
 
 
 
    return 0;
}
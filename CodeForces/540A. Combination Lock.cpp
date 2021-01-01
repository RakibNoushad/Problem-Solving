#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ulli;
typedef long long int  lli;
 
#define SQR(x) ((x)*(x))
 
 
char a[200010],b[200010];
//int x[200010],y[200010],z[200010];
 
int main()
{
    int n, m, t, i, j,k,f=0;
    cin >> n;
    cin >> a >> b;
    for(i=0;i<n;i++)
    {
        m=abs(a[i]-b[i]);
        if(a[i]<b[i]) t=(a[i]+10)-b[i];
        else t=(b[i]+10)-a[i];
        f+=min(m,t);
    }
    cout << f << endl;
 
 
 
    return 0;
}
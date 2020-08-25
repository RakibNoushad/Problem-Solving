#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ulli;
typedef long long int  lli;
 
#define SQR(x) ((x)*(x))
 
 
char a[200010],c[200010];
//int x[200010],y[200010],z[200010];
 
int main()
{
    int n, m, t, i, j,k,f=0;
    cin >> n;
    cin >> a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='8') f++;
        //cout << f << endl;
    }
    k=n/11;
    f=min(k,f);
    cout << f << endl;
 
 
 
    return 0;
}
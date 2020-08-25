#include<bits/stdc++.h>
using namespace std;
 
#define SQR(x) ((x)*(x))
 
char a[200010],c[200010];
//int x[200010],y[200010],z[200010];
 
int main()
{
    int n, m, t, i, j,p,q,f=1;
    long long int ans=0;
    cin >> a;
    n=strlen(a);
    m=(n/2)+1;
    i=n-1;
    while(n>=0)
    {
        for(j=0;j<n-2;j+=2)
        {
            if(a[j]>a[j+2])
            {
                p=a[j];
                a[j]=a[j+2];
                a[j+2]=p;
            }
        }
        n-=2;
 
    }
    cout << a << endl;
 
 
    return 0;
}
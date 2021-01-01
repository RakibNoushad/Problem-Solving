#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ulli;
typedef long long int  lli;
 
#define SQR(x) ((x)*(x))
 
 
//char x[200010],y[200010];
int a[200010],b[200010],c[200010];
 
int main()
{
    int n, m, t, i, j,k,f=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        cin >> b[i];
    }
 
 
    int top=1;
    j=0;
    for(i=0;i<n;i++)
    {
        c[a[i]]=top;
        top++;
    }
    top=0;
    for(i=0;i<n;i++)
    {
        a[i]= c[b[i]]-top;
        if(a[i]<0) a[i]=0;
        top +=a[i];
    }
    for(i=0;i<n-1;i++)
    {
        cout << a[i] << " ";
    }
    cout << a[n-1] << endl;
 
 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pw(x,y) (int)pow(x,y)+0.5
#define ub(a,b)  upper_bound(a.begin(),a.end(),b)-a.begin()
#define lb(a,b)  lower_bound(a.begin(),a.end(),b)-a.begin()
#define srt(a)   sort(a.begin(),a.end())
#define wl(t)    cin >> t; while(t--)
#define fr(t)  cin >> t; for(i=0;i<t;i++)
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i, j,k,mn=200,m,pos,mx=0,l,dif,f=0;
    LLI sum=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        cin >> b[i];
    }
    sort(b,b+n-1);
 
    for(i=0;i<n-2;i++)
    {
        cin >> c[i];
    }
    sort(c,c+n-2);
 
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            cout << a[i] << endl;
            break;
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(b[i]!=c[i])
        {
            cout << b[i] << endl;
            break;
        }
    }
 
 
return 0;
}
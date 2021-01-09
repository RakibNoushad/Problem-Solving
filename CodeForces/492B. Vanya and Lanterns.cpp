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
 
const int MX = 1e5 + 7 ;
const int INF = 1e8 + 7 ;
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010],c[200010],d[200010];
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n=1, t, i=0,mn=INF,m,pos,mx=0,l,dif,f=0,k=0,j=0;
    LLI sum=0,s;
 
    cin >> n >> s;
    vi v(n);
 
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    srt(v);
    mx=(v[0]-0)*2;
    for(i=1;i<n;i++)
    { 
        m=v[i]-v[i-1];
        mx=max(mx,m);
    }
    m=(s-v[n-1])*2;
    mx=max(mx,m);
 
    double df= mx/2.0; 
    printf("%.10f\n", df);
 
return 0;
}
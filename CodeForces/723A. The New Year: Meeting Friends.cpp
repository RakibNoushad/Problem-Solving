#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5
#define ub(a,b)  upper_bound(a.begin(),a.end(),b)-a.begin()
#define lb(a,b)  lower_bound(a.begin(),a.end(),b)-a.begin()
#define srt(a)   sort(a.begin(),a.end())
#define wl(t)    cin >> t; while(t--)
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i, j,k,f=0,mn,m,dif=0,pos,mx,l;
    LLI sum =0;
 
    cin >> n >> m >> k;
    mn = min(n,m);
    mn = min(mn,k);
 
    mx= max(n,m);
    mx = max(mx,k);
    int mid;
    if(m==n && n==k) mid =n;
    else if(m==n || m==k) mid =m;
    else if(m==n || n==k) mid =n;
    else if(k==m || k==n) mid =k;
    else if(n>mn && n<mx) mid =n;
    else if(m>mn && m<mx) mid = m;
    else mid = k;
 
    int ans = abs(mid-n)+abs(mid-m)+abs(mid-k);
    cout << ans << endl;
 
return 0;
}
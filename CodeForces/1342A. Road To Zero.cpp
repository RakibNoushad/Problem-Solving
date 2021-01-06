#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5
#define ub(a,b) upper_bound(a.begin(),a.end(),b)-a.begin()
#define lb(a,b) lower_bound(a.begin(),a.end(),b)-a.begin()
#define srt(a) sort(a.begin(),a.end())
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n, t, i, j,k,f=0,mn,l,m,dif=0,pos,p;
    
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        cin >> i >> j;
        LLI sum =0;
        k= n+m;
        k = k*i;
 
        l= abs(n-m);
        l= l*i;
        mn = min(n,m);
        l= l+(mn*j);
 
        p= abs(n-m);
        p = p *i;
        int mx = max(m,n);
        p = p+(mx*j);
 
        sum = min(k,l);
        sum = min(sum,p);
 
        cout << sum << endl;
    }
 
return 0;
}
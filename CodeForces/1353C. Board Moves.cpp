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
    LLI n=1, t, i=0,mn=200,m,pos,mx=0,l,dif,f=0,k=0,j=0;
    LLI sum=0,sumr=0;
 
    std::vector<long long> v(250010);
    v[0]=0;
    j=3;
    for(i=1;i<250010;i++)
    {
       l=j-2;
        v[i]=(j+l)*i*2;
        j+=2;
    }
 
    wl(t)
    {
 
        cin >> n;
        sum=0;
        m=n/2;
        for(i=1;i<=m;i++)
        {
            sum+=v[i];
        }
        cout << sum << endl;
    }

return 0;
}
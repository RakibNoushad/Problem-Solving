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
 
char x[200010],y[200010];
int v[200010],u[200010],c[200010],d[200010];
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n, t, i=0,mn=INF,m,pos,mx=0,l,dif,f=0,k=0,j,d,o,z,co,cz;
    LLI sum=0,s;
 
    wl(t)
    {
        cin >> n;
 
        mn=INF;
        f=0;
 
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        if(n%2)
        {
            cout << "-1\n";
            continue;
        }
        sort(v,v+n);
        for(i=1;i<n;i++)
        {
            pos=v[i]-v[i-1];
            mn= min(pos,mn);
        }
        for(j=mn;j<1100;j++)
        {
            for(i=0;i<n;i++)
            {
                m= v[i]^j;
                u[i]=m;
            }
            sort(u,u+n);
            f=0;
            for(i=0;i<n;i++)
            {
                if(u[i]==v[i])
                {
                   f++; 
                }
            }
            if(f==n)
            {
                cout << j << endl;
                break;
            }
        }
        if(f!=n) cout << "-1\n";
 
    }
 
return 0;
}
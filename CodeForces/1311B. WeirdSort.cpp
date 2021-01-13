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
#define w(t)    cin >> t; while(t--)
#define fr(t)  cin >> t; for(i=0;i<t;i++)
 
const int MX = 1e5 + 7 ;
const int INF = 1e8 + 7 ;
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010],c[200010],d[200010];

#define MAX 400
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n, t, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,k=-1,j,l=0;
    LLI sum=0,temp,ev;
    bool fl=true;

    w(t)
    {
        cin >> n >> m;
        vi v(n), u(m);
        f=0;
        for(i=0;i<n;i++) cin >> v[i];
        for(i=0;i<m;i++) cin >> u[i];
        while(1)
        {
            j=0;
            for(i=m-1;i>=0;i--)
            {
                if(v[u[i]-1]>v[u[i]]) swap(v[u[i]-1],v[u[i]]);
                else j++;
            }
            if(j==m) break;
        }
        for(i=1;i<n;i++) if(v[i]<v[i-1]) {f=1; break;}
        if(f) cout << "No\n";
        else cout << "Yes\n";       
    }
          
return 0;
}
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

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n, t, i=0,mn=INF,m,pos,mx=0,dif,f=0,k=0,j,l;
    LLI sum=0,s=0;
    bool fl=true;

    
   w(t)
   {
    cin >> n;
    vi v(n);
    mn=INF;
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    srt(v);
    j=v[0];
    f=0;
    for(i=1;i<n;i++)
    {
        if(v[i]-j==1)
        {
            v[i-1]=0;
            v[i]=0;
            j=v[i+1];
            i++;
            f=1;
        }
        else j=v[i];
    }
    int even=0,odd=0;
    for(i=0;i<n;i++)
    {
        if(v[i]%2) odd++;
        else if(v[i]%2==0 && v[i]) even++;
    }
    if(even%2==0 && odd%2==0) cout << "YES\n";
    else if(f==1 && (even%2 && odd%2)) cout << "YES\n";
    else cout << "NO\n";

   }
        
return 0;
}

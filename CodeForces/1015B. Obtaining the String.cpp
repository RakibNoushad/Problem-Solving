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

    
    cin >> n;
    cin >> x >> y;
    vi v;
    for(i=0;i<n;i++)
    {
        while(x[i]!=y[i])
        {
            for(j=i;j<n;j++)
            {
                if(x[j]==y[i])
                {
                    z[0]=x[j-1];
                    x[j-1]=x[j];
                    x[j]=z[0];
                    v.pb(j);
                    break;
                }
                else if(x[j]!=y[i] && j==n-1)
                {
                    cout << "-1" << endl;
                    return 0;
                }
            }
        }
    }

    cout << v.size() << endl;
    for(i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
        
return 0;
}
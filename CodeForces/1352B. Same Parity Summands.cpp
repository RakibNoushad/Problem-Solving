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
    LLI n=1, t, i,mn=200,m,pos,mx=0,l,dif,f=0,k,j;
    LLI sum=0,sumo;
    
    wl(t)
    {
        cin >> n >> k;
        if((n-k+1)%2 && (n-k+1)>0)
        {
            cout << "YES\n";
            for(i=1;i<k;i++)
            {
                cout << "1 ";
            }
            cout << n-k+1 << endl;
        }
        else if((n-2*k+2)%2==0 && (n-2*k+2)>0)
        {
            cout << "YES\n";
            for(i=1;i<k;i++) cout << "2 ";
                cout << n-2*k+2 << endl;
        }
        else cout << "NO\n";
    }
 
return 0;
}
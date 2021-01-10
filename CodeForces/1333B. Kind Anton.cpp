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
int a[200010],b[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i=0,mn=INF,m,pos,mx=0,dif,f=0,k=0,j;
    int sum=0,l,no,mo;
    
    wl(t)
    {
        cin >> n;
        mx=0;mn=0;f=1;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(i=0;i<n;i++)
        {
            cin >> b[i];
        }
 
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i]<b[i] && mx==0)
                {
                    f=0;
                }
                else if(a[i]>b[i] && mn==0)
                {
                    f=0;
                }
            }
 
            if(a[i]>0) mx=1;
            else if(a[i]<0) mn=1;
 
            if(f==0) break;
        }
        if(f==0) cout << "NO\n";
        else cout << "YES\n";
    }
        
return 0;
}

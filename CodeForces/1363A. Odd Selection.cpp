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
    int n, t, i=0,mn=INF,m,pos,mx=0,l,dif,f=0,k=0,j,d;
    LLI sum=0,s;
 
    wl(t)
    {
        cin >> n >> m;
        f=0;
        k=0;
        l=1;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            if(f==0 && l==1 && a[i]%2)
            {
                m--;
                l=0;
                f=1;
            }
            else if((a[i]%2==0 && m>1 && l==1) || (a[i]%2==0 && m && l==0))
            {
                m--;
                k++;
            }
            else if(m>1 && f==0 && a[i]%2)
            {
                f=1;
                m-=2;
 
            }
            else if(m && f==1 && a[i]%2)
            {
                f=0;
            }
            else if(k>0 && f==1 && a[i]%2 && m)
            {
                f=0;
            }
            else if(k>0 && f==0 && a[i]%2 && m)
            {
                f=1;
                m-=1;
                k--;
            }
        }
        if(l==0 && m==0)
        {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    
    
   
 
return 0;
}
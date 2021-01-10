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
int a[2010],b[200010],d[200010];
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i=0,mn=INF,m,pos,mx=0,l,dif,f=0,k=0,j;
    LLI sum=0,s;
    
    wl(t)
    {
        cin >> n >> m;
        f=0,mx=0;
        memset(a, 0, sizeof(a));
        for(i=0;i<n;i++)
        {
            cin >> l;
            a[l]++;
        }

        for(i=1;i<=300;i++)
        {
            if(a[i]==0 && m)
            {
                f++;
                m--;
            }
            else if(a[i]>0)
            {
                f++;
            }
            else if(a[i]==0 && m==0)
            {
                break;
            }
        }
        cout << f << endl;
    }
        
return 0;
}
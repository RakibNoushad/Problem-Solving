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
char a[110];
 
 
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
        cin >> n >> m >> k >> l;
        if(k*2<l) l=k*2;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin >> a;
            for(j=0;j<m;j++)
            {
                if(j<m-1)
                {
                    if(a[j]=='.' && a[j+1]=='.')
                    {
                        sum+=l;
                        j++;
                    }
                    else if(a[j]=='.') sum+=k;
                }
                else if(j==m-1 && a[m-1]=='.') sum+=k;
                else if(m==1 && a[0]=='.') sum+=k;
 
            }
        }
        cout << sum << endl;
    }
return 0;
}
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
 
 
int choto(int n, int i)
{
    if(n%i==0) return i;
    else choto(n, i+1); 
}
 
 
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
        for(j=1;j<=k;j++)
        {
            m=choto(n, 2);
            if(m==2)
            {
                n+=((k-j)*2);
                n+=2;
                break;
            }
            else n+=m;
        }
        cout << n << endl;
 
    }
    
return 0;
}
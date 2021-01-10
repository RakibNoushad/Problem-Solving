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
int a[200010],u[200010],c[200010],d[200010];
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    long long n, t, i=0,mn=INF,m,pos,mx=0,l,dif,f=0,k=0,j,d,o,z,co,cz;
    unsigned long long sum=0,s;
 
    cin >> n >> m;
    if(n==m)
    {
        n=n*10;
        m=n+1;
        cout << n << " " << m<< endl;
    }
    else if(n==9 && m==1)
    {
        n=n*11;
        m=n+1;
        cout << n << " " << m<< endl;
    }
    else if(n>m || m-n>1) cout << "-1\n";
    else
    {
        cout << n << " " << m<< endl;
    }
 
return 0;
}
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
 
    std::vector<long long int> v(200);
    k=2;
    v[0]=1;
    v[1]=3;
    v[2]=7;
    v[3]=15;
    for(i=4;i<70;i++)
    {
        v[i]=v[i-1]+v[i-1]+1;
    }
 
    wl(t)
    {
        cin >> n;
        sum=0;
        while(n)
        {
            if(n==1)
            {
                sum++;
                break;
            }
            s=1;
            for(i=1;s*2<=n;i++)
            {
                s*=2;
            }
            sum+=v[i-1];
            n-=s;
        }
        cout << sum << endl;
 
    }
 
return 0;
}

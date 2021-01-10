
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
 
char x[200010],y[200010];
int a[200010],b[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i=0,mn=INF,m,pos,mx=0,dif,f=0,k=0,j,l;
    LLI sum=0,s=0;
 
    w(t)
    {
        cin >> n >> m;
        std::vector<long long> v(n), u(n);
        sum=0;f=0;s=0;
        cin >> a[0];
        v[0]=a[0];
        for(i=1;i<n;i++)
        {
            cin >> a[i];
            v[i]=v[i-1]+a[i];
        }
        u[0]=a[n-1];
        j=n-2;
        for(i=1;i<n;i++)
        {
            u[i]=u[i-1]+a[j];
            j--;
        }
 
        for(i=n-1;i>=0;i--)
        {
            if(v[i]%m || u[i]%m)
            {
                j=i+1;
                break;
            }
        }
        cout << j << endl; 
    }
 
    
        
return 0;
}
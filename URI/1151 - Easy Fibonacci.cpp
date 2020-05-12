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
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i, j,k,mn=200,m,pos,mx=0,l,dif,f=0;
    LLI sum=0;
    a[0]=0;
    a[1]=1;
    cin >> n;
    for(i=0;i<n-1;i++)
    {
        if(i>=2)
        {
            a[i]=a[i-1]+a[i-2];
        }
        cout << a[i] << " ";
    }
    cout << a[n-2] + a[n-3] << endl;

   


return 0;
}
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

bool isPrime(int n){if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2)if(n%i==0) return false;
    return true;}
 
const int MX = 1e5 + 7 ;
const int INF = 1e8 + 7 ;
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010],c[200010],d[200010];
LLI n,k;

bool valid(int x, int cur)
{
    int ans=0;
    for(int i=0;i<n;i++){
    if(!cur)
    {
        ans++;
        cur ^=1;
    }
    else
    {
        if(a[i]<=x)
        {
            ans++;
            cur^=1;
        }
    }
    if(ans>=k) break;
    }
    return ans>=k;
}

int binSearch(int lo, int hi)
{
    while(lo<hi)
    {
        int mid= (lo+hi)/2;
        if(valid(mid, 0) || valid(mid,1)) hi=mid;
        else lo=mid+1;
    }
    return lo;
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI t, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0;
    double sum=0;
    

   
    mn=1e9;
    mx=0;
    int ans;
    cin >> n >> k;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]<mn) mn=a[i];
        if(a[i]>mx) mx=a[i];
    }
    ans = binSearch(mn,mx);
    cout << ans << endl;
        
return 0;
}
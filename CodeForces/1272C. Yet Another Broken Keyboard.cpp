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
int mod(int n)
{
    int m=0;
    while(n>=10)
    {
        m+=n%10;
        n/=10;
    }
    return m+n;
}
 
const int MX = 1e5 + 7 ;
const int INF = 1e9 + 7 ;
 
char x[200010],y[200010],z[1000010];
int a[200010],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI t, n,k, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0,r;
    LLI  sum=0,maxSum, curSum;
    vector<long long> fib(200010);
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<200010;i++)
    {
        fib[i]=fib[i-1]+i;
    }
    
   cin >> n >> m;
   cin >> x;
   std::vector<char> v(m);
   vector<int> cnt(n);
   for(i=0;i<m;i++) {cin >>v[i];
    for(j=0;j<n;j++)
    {
        if(x[j]==v[i]) cnt[j]=1;
    }
   }
   sum=0;
   for(i=0;i<n;i++)
   {
    if(cnt[i]==0) sum=0;
    else {sum+=cnt[i]; cnt[i]=sum;}
   }
   sum=0;
   for(i=0;i<n;i++)
   {
    if(i<n-1 && cnt[i+1]==0) sum+=fib[cnt[i]];
    if(i==n-1 && cnt[i]) sum+=fib[cnt[i]];
   }
   cout << sum << endl;




return 0;
}
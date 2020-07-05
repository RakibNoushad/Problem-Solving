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

const int INF = 1e9 + 7 ;
const long long LINF = 9e18 + 7;
 
bool isPrime(int n){if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2)if(n%i==0) return false;
    return true;}
 

 
char x[200010],y[200010],z[1000010];
int a[200010],b[200010],c[200010],d[200010];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        const clock_t start = clock();
    #endif
    int t, k, i=0,mn=INF,mx=0,j,n,m;
    LLI  sum=0,maxSum, curSum;
    set<int> st;
    
  w(t)
  {
    cin >> n;
    cin >> a[0];
    sum=0;
    for(i=1;i<n;i++)
    {
        cin >> a[i];
        sum+=(abs(a[i-1]-a[i])-1);
    }
    cout << sum << endl;

    
  }
    
   
return 0;
}
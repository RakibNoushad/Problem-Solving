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
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI t,n,k, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0;
    LLI sum=0;
   
    w(t)
    {
        cin >> n >> k;
        sum=0;
        l=0;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for(i=0;i<k;i++)
        {
            cin >> b[i];
            if(b[i]==1) l++;
        }
        sort(b,b+k, greater<int>());
        dif=l;
        i=n-1;
        while(dif--)
        {
            sum+=(a[i]+a[i]);
            i--;
        }
        j=0;
        m=n-1-l;
        for(i=0;i<k-l;i++)
        {
            sum+=(a[j]+a[m]);
            m--;
            j+=(b[i]-1);
        }
        cout << sum << endl;

    }
    

        
return 0;
}
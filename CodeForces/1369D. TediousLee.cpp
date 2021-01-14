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
const int INF = 1e9 + 7 ;
 
char x[200010],y[200010],z[200010];
LLI a[2000009],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI t,n,k, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0;
    LLI sum=0;
    a[0]=0, a[1]=0,a[2]=0,a[3]=1;
    for(i=4;i<2000009;i++)
    {
        a[i]=(a[i-1]+(2*a[i-2]))%mn;
        if(i%3==0) a[i]++;
    }
    w(t)
    {
        cin >> n;
        m= (a[n]*4)%mn;
        cout << m << endl;
    }


        
return 0;
}
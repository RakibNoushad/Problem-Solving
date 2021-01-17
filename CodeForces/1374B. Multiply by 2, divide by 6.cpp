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
    std::vector<long long> v(13);
    v[0]=0;
    v[1]=6;
    for(i=2;i<13;i++)
    {
        v[i]=v[i-1]*6;
    }

    w(t)
    {
        cin >> n;
        sum=0;
        f=0;
        if(n==1){ cout << 0 << endl; continue;}
        while(n>1)
        {
            f=0;
            if(n%6!=0) {n*=2; sum++;}
            for(i=12;i>0;i--)
            {
                if(n>=v[i])
                {
                    if(n%v[i]==0)
                    {
                        n/=v[i];
                        sum+=i;
                        f=1;
                    }
                }
            }
            if(f==0) break;
        }
        if(f==0) cout << -1 << endl;
        else cout << sum << endl;


    }


return 0;
}
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
int a[200010],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int t,n,k, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0;
    LLI sum=0;
    w(t)
    {
        cin >> n >> m >> k;
        cin >> x;
        l=strlen(x);
        j=0;
        f=0;
        for(i=l-2;i>=0;i--)
        {
            if(x[i]=='B' && i==l-2) j+=m;
            else if(x[i]=='A' && i==l-2) j+=n;
            else if(x[i]=='B' && x[i+1]=='A') j+=m;
            else if(x[i]=='A' && x[i+1]=='B') j+=n;
            if(j>k)
            {
                i++;
                f=1;
                break;
            }
        }
        if(i==l-2 && f==0) i++;
        else if(i==-1) i=0;

        cout << i+1 << endl;

    }


        
return 0;
}
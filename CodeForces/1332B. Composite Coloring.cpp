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
int a[1010],b[1010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int t,n,k, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0;
    LLI sum=0;
    int prime[11]={2,3,5,7,11,13,17,19,23,29,31};
    w(t)
    {
        cin >> n;
        m=1;
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++)
        {
            cin >> b[i];
            
        }
        m=1; k=0; f=0;
        for(j=0;j<11;j++)
            {
                f=0;
                for(i=0;i<n;i++)
                {
                if(b[i]%prime[j]==0 && a[i]==0) {a[i]=m; k++; f=1; continue;}
                }
                if(k==n) break;
                if(f) m++;
            }
        cout << m << endl;
        for(i=0;i<n;i++) cout << a[i] << " ";
            cout << endl;
    }


        
return 0;
}
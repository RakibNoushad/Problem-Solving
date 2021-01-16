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
int a[200010],b[5010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI t, n,k, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0;
    LLI sum=0;
    double one=0;
    
    w(t)
    {
     cin >> x;
     f=0;l=0;k=0;
     n=strlen(x);
     while(1)
     {
        j=0;l=0;k=0;
        for(i=0;i<n;i++)
            {
                if(x[i]=='0' && k)
                {
                    x[k-1]='.';
                    x[i]='.';
                    k=0;
                    f++;
                    j=1;
                }
                else if(x[i]=='1' && l)
                {
                    x[l-1]='.';
                    x[i]='.';
                    l=0;
                    f++;
                    j=1;
                }
                else if(x[i]=='0' && l==0) {l=i+1;}
                else if(x[i]=='1' && k==0) k=i+1;
            }
            if(j==0) break;
     }
     if(f%2==0) cout << "NET\n";
     else cout << "DA\n";

    }  

        
return 0;
}
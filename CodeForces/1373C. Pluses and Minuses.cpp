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
 
char x[1000010],y[200010],z[200010];
LLI a[200010],b[5010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int t, n,k, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0,r, l2, r2;
    LLI  sum=0,res=0,res2=0,sum2=0, temp1, temp2,final;
 
    
    w(t)
    {
      cin >> x;
      n=strlen(x);
      vi v(n);
      sum=0;
      if(x[0]=='-') v[0]=-1;
      else v[0]=1;
      mn=v[0];
      for(i=1;i<n;i++)
      {
        if(x[i]=='-') v[i]=v[i-1]-1;
        else v[i]=v[i-1]+1;
        mn=min(v[i],mn);
      }
      j=-1;
      i=0;
      while(1)
      {
        if(j<mn) break;
        for(i;i<n;i++)
        {
            if(v[i]==j) {res=i+1; break;}
        }
        sum+=res;
        j--;
        if(j<mn) break;
      }
      sum+=n;
 
      cout << sum << endl;
    }  
 
        
return 0;
}
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
    LLI n, t, i=0,mn=INF,m,pos,mx=0,dif,f=0,k=0,j,l;
    LLI sum=0,s=0;
    bool fl=true;
 
    
   w(t)
   {
    cin >>n >> m;
    cin >> x;
    f=0;
    l=0,j=0;
    k=min(m,n-1);
    for(i=1;i<=k;i++)
    {
        if(x[0]=='0')
        {
            if(x[i]=='0') l++;
        }
        else break;
    }
    if(n<=m && l==n-1 && x[0]=='0') f++;
    if(l==m) x[0]='1',f=1;
    for(i=0;i<n;i++)
    {
        if(x[i]=='1')
        {
            if(x[i+m+1]=='0' && (i+m+1)<n)
                {
                    k=i+(2*m)+1;
                    l=0;
                    if(i+m+1==n-1) l=0;
                    k=min(k,n-1);
                        for(j=i+m+2;j<=k;j++)
                        {
                            if(x[j]=='1') l=1;
                        }
                    if(l==0){
                        x[i+m+1]='1';
                        i+=m;
                        f++;
                    }
 
                }
            else i+=m;
        }
    }
    cout << f << endl;
 
   }
        
return 0;
}
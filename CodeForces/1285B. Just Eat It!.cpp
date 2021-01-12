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
    LLI n, t, i=0,mn=INF,m,pos,mx=0,dif,f=0,k=-1,j,l=0;
    LLI sum=0,s=0,temps;
    bool fl=true;
    
    
   w(t)
   {

    cin >> n;
    sum=0,f=0;
    temps=(-INF),s=(-INF),l=0;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        sum+=a[i];
        if(a[i]<0) f=1;
    }
    if(sum==0) {cout << "No\n"; continue;}
    if(f==0){cout << "Yes\n"; continue;}

    temps=a[0];
    s=a[0];
    f=0;
    for(i=1;i<n;i++)
    {
        m=a[i];
        if((m+temps)<=m) f++;
        temps= max(m+temps,m);
        s=max(s,temps);
        if(s>sum || (s==sum && i==n-1 && f) || (s==sum && i<n-1))
        {
            l=1;
            break;
        }
    }

    if(l==1) cout << "No\n";
    else cout << "Yes\n";


   }
        
return 0;
}
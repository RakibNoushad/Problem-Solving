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
    LLI sum=0,s=0;
    bool fl=true;
 
    
   cin >> n;
   for(i=0;i<n;i++) cin >> a[i];
   for(i=0;i<n;i++) cin >> b[i];

    for(i=0;i<n;i++){
        if(a[i]==1 && b[i]==0) f++;
        else if(a[i]==0 && b[i]==1) l++;
    }

    if(f) {k=l/f; if(f*k<=l) k++;}
    if(f>l) k=1;

    cout << k << endl;
        
return 0;
}
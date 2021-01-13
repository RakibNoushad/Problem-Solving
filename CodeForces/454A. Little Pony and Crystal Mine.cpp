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

#define MAX 400
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n, t, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,k=-1,j,l=0;
    LLI sum=0,temp,ev;
    bool fl=true;
    int ch[26];
    cin >> n;
    k=1;
    for(i=0;i<n;i++)
    {
        m=n-k;
        m/=2;
        for(j=0;j<n;j++)
        {
            if(j<m) cout << "*";
            else if(j<m+k) cout << "D";
            else if(j<m+k+m) cout << "*";
        }
        if(k==n) l=1;
        if(l) k-=2;
        else k+=2;
        cout << endl;
    }
       
return 0;
}
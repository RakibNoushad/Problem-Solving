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
 
char x[200010],y[200010];
int a[200010],b[200010],c[200010],d[200010];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i=0,mn=INF,m,pos,mx=0,dif,f=0,k=0,j,l;
    LLI sum=0,s=0;
    bool fl=true;

    w(t)
    {
        int res=0, odd1=0, odd2=0;
        cin >> n;
        for(i=1;i<=n;i++)
        {
            cin >> f;
            if(f%2 && odd1<=0) odd1=i;
            else if(f%2 && odd2<=0) odd2=i;
            else if(f%2==0) res=i;
        }
        if(res)
        {
            cout << "1" << endl << res << endl;
        }
        else if(odd1==0 || odd2==0) cout << "-1\n";
        else
        {
            cout << "2" << endl << odd1 << " " << odd2 << endl;
        }
    }
    
        
return 0;
}

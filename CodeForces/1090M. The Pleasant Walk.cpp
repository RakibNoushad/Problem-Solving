#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5
#define ub(a,b) upper_bound(a.begin(),a.end(),b)-a.begin()
#define lb(a,b) lower_bound(a.begin(),a.end(),b)-a.begin()
#define srt(a) sort(a.begin(),a.end())
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010];
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n=1, t, i, j,k,f=0,mx,l,m,dif=0;
    LLI sum =0;
    
    cin >> n;
    cin >> m;
    vi v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(i=1;i<n;i++)
    {
        if(v[i]!=v[i-1]) dif++;
        else
        {
            if(dif>=f) f = dif;
            dif=0;
        }
    }
    if(dif>=f) f = dif;
    cout << f+1 << endl;
 
return 0;
}
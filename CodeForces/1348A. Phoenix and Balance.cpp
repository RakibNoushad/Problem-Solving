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
#define wl(t)    cin >> t; while(t--)
#define fr(t)  cin >> t; for(i=0;i<t;i++)
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n, t, i, j,k,mn=200,m,pos,mx=0,l;
    
    wl(t)
    {
        LLI suma =0, sumb=0,dif=0;
        int f=0,fl=0;
        cin >> n;
        m=(n/2)-1;
        suma= pw(2,n);
        for(i=1;i<n;i++)
        {
            if(m)
                {
                    suma+= pw(2,i);
                    m--;
                }
            else sumb+= pw(2,i); 
        }
        dif= abs(suma-sumb);
        cout << dif << endl;
 
    }
 
return 0;
}
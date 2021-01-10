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
 
const int MX = 1e5 + 7 ;
const int INF = 1e8 + 7 ;
 
char x[200010],y[200010];
int a[200010],b[200010],d[200010];
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i=0,mn=INF,m,pos,mx=0,l,dif,f=0,k=0,j,o,z,co,cz,s;
    LLI sum=0;
 
    wl(t)
    {
        cin >> n;
        f=0;
        for(i=0;i<n;i++)
        {
            cin>> a[i];
            if(i>0)
            {
                if(a[i]<a[i-1])
                {
                    f=1;
                }
            }
        }
 
        for(i=0;i<n;i++)
        {
            cin >> b[i];
        }
        if(f==0)
        {
            cout << "Yes\n";
            continue;
        }
 
        for(i=0;i<n;i++)
        {
            j=i+1;
            while(j<n)
            {
                if(b[i]!=b[j])
                {
                    f=0;
                    break;
                }
                j++;
            }
            if(f==0) break;
        }
        if(f==0) cout << "Yes\n";
        else cout << "No\n";
 
 
    }
    
 
return 0;
}
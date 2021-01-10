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
int a[210][210],c[200010],d[200010];
 
 
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
        cin >> n >> m;
        k=min(n,m);
        f=0;
        s=0;
 
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin >> pos;
                if(pos==1)
                {
                    c[i]=1;
                    d[j]=1;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(c[i]==0) f++;
            else c[i]=0;
        }
        for(i=0;i<m;i++)
        {
            if(d[i]==0) s++;
            else d[i]=0;
        }
        f=min(s,f);
        
        if(f%2)
        {
            cout << "Ashish\n";
        }
        else cout << "Vivek\n";
    }
    
 
return 0;
}
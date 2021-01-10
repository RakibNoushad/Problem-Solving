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
    int n, t, i=0,mn=INF,m,pos,mx=0,l,dif,f=0,k=0,j;
    LLI sum=0,s;
    
    wl(t)
    {
        cin >> x;
        f=0;
        n=strlen(x);
        for(i=0;i<n;i++)
        {
            if(x[i]=='?' && i>0)
            {
                if(x[i-1]!='a' && x[i+1]!='a') x[i]='a';
                else if(x[i-1]!='b' && x[i+1]!='b') x[i]='b';
                else if(x[i-1]!='c' && x[i+1]!='c') x[i]='c';
                else {f=1; break;}
            }
            else if(x[i]=='?')
            {
                if(x[i+1]!='a') x[i]='a';
                else if(x[i+1]!='b') x[i]='b';
                else x[i]='c';
            }
            else if(i>0)
            {
                if(x[i-1]==x[i]) {f=1; break;}
            }
        }
        if(f==1) cout << "-1";
        else
        {
            for(i=0;i<n;i++) cout <<x[i];
        }
    cout << endl;
 
    }
        
return 0;
}

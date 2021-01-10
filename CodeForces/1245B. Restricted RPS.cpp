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
int s[26];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i=0,mn=INF,m,pos,mx=0,l,dif,f=0,k=0,j,a,b,c;
    
    wl(t)
    {
        cin >> n >> a >> b >> c >> x;
 
        memset(s, 0, sizeof(s));
        for(i=0;i<n;i++)
        {
            s[x[i]-'A']++;
        }
 
        int win;
 
        win = min(a, s['S'-'A'])+ min(b, s['R'-'A']) + min(c, s['P'-'A']);
 
        if(win*2<n) cout << "NO\n";
        else
        {
            cout << "YES\n";
 
            string t;
            for(i=0;i<n;i++)
            {
                if(x[i]=='R' && b)
                {
                    t+='P';
                    b--;
                }
                else if(x[i]=='P' && c)
                {
                    t+='S';
                    c--;
                }
                else if(x[i]=='S' && a)
                {
                    t+='R';
                    a--;
                }
                else t+='.';
            }
            for(i=0;i<n;i++)
            {
                if(t[i]=='.')
                {
                    if(a)
                    {
                        t[i]='R';
                        a--;
                    }
                    else if(b)
                    {
                        t[i]='P';
                        b--;
                    }
                    else if(c)
                    {
                        t[i]='S';
                        c--;
                    }
                }
            }
            cout << t << endl;
        }    
    }
        
return 0;
}
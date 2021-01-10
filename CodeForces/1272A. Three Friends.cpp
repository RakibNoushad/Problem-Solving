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
    int n, t, i=0,mn=INF,m,pos,mx=0,l,dif,f=0,k=0,j,a,b,c;
    LLI sum=0;
    vi s(3);
    
    wl(t)
    {
        cin >> s[0] >> s[1] >> s[2];
        sum=0;
 
        srt(s);
 
        if(s[0]==s[1] && s[0]==s[2]) cout << sum << endl;
        else if(s[0]==s[1] && s[2]-s[1]==1) cout << sum << endl;
        else if(s[1]==s[2] && s[1]-s[0]==1) cout << sum << endl;
        else
        {
            if(s[0]==s[1])
            {
                s[0]++;
                s[1]++;
                s[2]--;
                sum=abs(s[1]-s[0]) + abs(s[2]-s[0]) + abs(s[2]-s[1]);
                cout << sum << endl;
            }
            else if(s[1]==s[2])
            {
                s[0]++;
                s[1]--;
                s[2]--;
                sum=abs(s[1]-s[0]) + abs(s[2]-s[0]) + abs(s[2]-s[1]);
                 cout << sum << endl;
            }
            else
            {
                s[0]++;
                s[2]--;
                sum=abs(s[1]-s[0]) + abs(s[2]-s[0]) + abs(s[2]-s[1]);
                cout << sum << endl;
            }
        }
    }
        
return 0;
}
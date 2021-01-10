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
        cin >> x;
        int u=0, d=0,r=0;
        l=0;
        n=strlen(x);
        for(i=0;i<n;i++)
        {
            if(x[i]=='R') r++;
            else if(x[i]=='L') l++;
            else if(x[i]=='U') u++;
            else d++;
        }
        if((l==0 || r==0) && u>1) u=1;
        else if((u==0 || d==0) && l>1) l=1;
        l=min(l,r);
        u=min(u,d);
        r=l;
        d=u;
        s=2*(l+u);
        cout << s << endl;
        string ans;
        for(i=0;i<s;i++)
        {
            if(l)
            {
                ans+='L';
                l--;
            }
            else if(u)
            {
                ans+='U';
                u--;
            }
            else if(r)
            {
                ans+='R';
                r--;
            }
            else if(d)
            {
                ans+='D';
                d--;
            } 
        }
        cout << ans << endl;
    }
    
        
return 0;
}
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
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n, t, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,k=-1,j,l=0;
    LLI sum=0,s=0,temps;
    bool fl=true;
    
    LLI a,b;
    w(t)
    {
        cin >> a >> b >> n;
        f=0;
        while(a<=n && b<=n)
        {
            if(a>=b)
            {
                pos=a;
                a+=b;
                b=pos;
                f++;
            }
            else
            {
                pos=b;
                b+=a;
                a=pos;
                f++;
            }
        }
        cout << f << endl;

    }
       
return 0;
}
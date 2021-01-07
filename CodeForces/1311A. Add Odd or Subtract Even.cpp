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
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n, t, i, j,k,f=0,mn,l,m,dif=0,pos,p;
    char a[1010][10];
    
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        f=0;
        if(n>m)
        {
            dif = n-m;
            if(dif%2)
            {
                f=2;
            }
            else f=1;
        }
        else if(m>n)
        {
            dif = m-n;
            if(dif%2)
            {
                f=1;
            }
            else f=2;
        }
        cout << f << endl;
    }
return 0;
}
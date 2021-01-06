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

int a[200010],b[200010];
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n=1, t, i, j,k,pc=0,pp=0,mx,l,m,dif,p,c,f;
    LLI sum =0;
    
    cin >> t;
    while(t--)
    {
        cin >> n;
        f=0, pc =0,pp=0;
        int cd, pd;
        for(i=1;i<=n;i++)
        {
            cin >> p >> c;
            if(p<pp || c<pc) f++;
            else
            {
                pd = p-pp;
                cd = c-pc;
                if(cd>pd) f++;
            }
            pc= c;
            pp = p;
        }
        if(f>0) cout << "NO\n";
        else cout << "YES\n";
 
    }
 
return 0;
}
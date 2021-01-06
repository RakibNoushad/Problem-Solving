#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5
#define up(a,b) upper_bound(a.begin(),a.end(),b)-a.begin()
 
 
char x[200010],y[200010],z[200010];
 
int solve(int b, int i)
{
    int full;
    b=b/2;
    full = min(b,i);
 
    return full; 
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n=1, t, i, j,k,f=0,mn=0,mx,l,m,dif;
    LLI sum =0;
    
    int b,p,c,h;
    cin >> t;
    while(t--)
    {
        cin >> b >> p >> f;
        cin >> h >> c;
        if(c>=h)
        {
            f = solve(b, f);
            b = b- (f*2);
            f = f*c;
            k = solve(b,p);
            f+= (k*h);
        }
        else
        {
            f= solve(b,p);
            b=b-(f*2);
            f= f*h;
            k = solve(b,f);
            f+= (k*c);
        }
        cout << f << endl;
 
    }
 
return 0;
}
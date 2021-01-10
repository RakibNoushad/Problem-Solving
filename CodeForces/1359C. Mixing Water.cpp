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
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i=0,mn=INF,m,pos,mx=0,l,dif,f=0,k=0,j,d,h,c;
    LLI sum=0,s,x,y;
 
    wl(n)
    {
        cin >> h >> c >> t;
        pos=(h+c)/2;
 
        if(t==h)
        {
            cout << "1" << endl;
            continue;
        }
        else if(pos>=t)
        {
            f=2;
            cout << f << endl;
            continue;
        }
        else
        {
            x=(t-c)/(2*t-h-c);
            y=x+1;
 
            long double p1= ((h*x)+c*(x-1))/(1.0*(2*x-1));
            p1=abs(t-p1);
 
            long double p2= ((h*y)+c*(y-1))/(1.0*(2*y-1));
            p2=abs(t-p2);
 
 
            if(p1<=p2) cout << 2*x-1 << endl;
            else cout << 2*y-1 << endl;
 
 
        }
        
 
    }
    
    
   
 
return 0;
}

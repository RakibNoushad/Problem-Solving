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
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n, t, i=0,mn=INF,m,pos,mx=0,dif,f=0,k=-1,j,l=0;
    LLI sum=0,s=0;
    bool fl=true;
    
    int a,b,c,d,x,y,x1,x2,y1,y2;
    
   w(t)
   {
    cin >> a>> b>> c>> d;
    cin >> x >> y >> x1 >>y1 >> x2>> y2;

    if(x==x1 && x1==x2 && (a||b))
    {
        cout << "No\n";
        continue;
    }
    else if(y==y1 && y1==y2 && (c||d))
    {
        cout << "No\n";
        continue;
    }

    if(a>b)
    {
        a-=b;
        if(x-a<x1)
        {
            cout << "No\n";
            continue;
        }
    }
    else if(a<b)
    {
        b-=a;
        if(x+b>x2)
        {
            cout << "No\n";
            continue;
        }
    }
    if(c>d)
    {
        c-=d;
        if(y-c<y1)
        {
            cout << "No\n";
            continue;
        }
    }
    else if(d>c)
    {
        d-=c;
        if(y+d>y2)
        {
            cout << "No\n";
            continue;
        }
    }
    cout << "Yes\n";
   }
        
return 0;
}
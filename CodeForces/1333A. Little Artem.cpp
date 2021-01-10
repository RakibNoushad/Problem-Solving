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
    int n, t, i=0,mn=INF,m,pos,mx=0,dif,f=0,k=0,j;
    int sum=0,l,no,mo;
    
    wl(t)
    {
        cin >> n >> m;
        string first;
        string others;
        if(n==1)
        {
            for(i=0;i<m;i++)
            {
                if(i==1) first+='W';
                else first+='B';
            }
            cout << first << endl;
        }
        else
        {
            for(i=0;i<m;i++)
            {
                if(i==0)
                {
                    first+='W';
                    others+='B';
                }
                else
                {
                    first+='B';
                    others+='B';
                }
            }
            cout << first << endl;
            for(i=1;i<n;i++) cout << others << endl;
        }
    }
        
return 0;
}
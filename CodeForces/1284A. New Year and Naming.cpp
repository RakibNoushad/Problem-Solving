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
//int a[200010],b[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n, t, i, j,k,f=0,mn,l,m,dif=0,pos,p;
    string a[30], b[30];
    
    cin >> n >> m;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<m;i++)
    {
        cin >> b[i];
    }
    cin >> t;
    while(t--)
    {
        cin >> k;
        i=k%n;
        if(i==0) i=n;
        j=k%m;
        if(j==0) j=m;
        cout << a[i-1] << b[j-1]<< endl;
 
    }
 
return 0;
}
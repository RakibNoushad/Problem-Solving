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
    
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i][0]=='O' && a[i][1]=='O')
        {
            a[i][0]='+';
            a[i][1]='+';
            f++;
            break;
        }
        else if(a[i][3]=='O' && a[i][4]=='O')
        {
            a[i][3]='+';
            a[i][4]='+';
            f++;
            break;
        }
    }
    if(f>0)
    {
        cout << "YES" << endl;
    for(i=0;i<n;i++)
    {
        cout << a[i] << endl;
    }
    }
else
{
    cout << "NO" << endl;
}
 
 
return 0;
}
#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5
#define ub(a,b) upper_bound(a.begin(),a.end(),b)-a.begin()

int a[200010],b[200010];
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n=1, t, i, j,k,f=0,mn=0,mx,l,m,dif;
    LLI sum =0;
    
    cin >> n;
    vi v(n);
    cin>> a[0];
    v[0]=a[0];
    for(i=1;i<n;i++)
    {
        cin >> a[i];
        v[i] = v[i-1]+a[i];
    }
    cin >> m;
    for(i=0;i<m;i++)
    {
        cin >> b[i];
        f=ub(v,b[i]);
        if(f==n) f--;
        if(v[f-1]==b[i]) f--;
        cout << f+1 << endl;
    }
 
 
return 0;
}
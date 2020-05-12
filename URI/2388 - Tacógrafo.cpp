#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;

#define SQR(x) ((x)*(x))
#define pb push_back

 
//char x[200010],y[200010];
int a[200010],b[200010],c[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i, j,k,f=0,mn=0,mx,l,d,sun=0,m;
    long long int sum =0;
    
    vi v(150000);

    cin >> t;
    
    while(t--)
    {
        cin >> n >> m;
        sum= sum + (n*m);

    }
    cout << sum << endl;
 
return 0;
}
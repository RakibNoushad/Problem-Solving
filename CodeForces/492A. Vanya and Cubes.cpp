#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back

char a[200010],b[200010],c[200010];
 
int main()
{
    int n, m, t, i, j,k,f=0,mn,mx;
    
    vi v(10000);
 
    cin >> n;
    v[1]=1;
    f=1;
    if(n==1) cout << f << endl;
    for(i=2;i<=n;i++)
    {
        v[i]=v[i-1]+i;
        f+=v[i];
        if(f>n)
        {
            cout << i-1 << endl;
            break;
        }
    }
 
 
    return 0;
}
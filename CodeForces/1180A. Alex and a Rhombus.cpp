#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back

int a[200010],b[200010],c[200010];
 
int main()
{
    int n, m, t, i, j,k,f=0;
    
    vi v(1000);
 
    cin >> n;
 
    v[1]=1;
    for(i=2;i<=n;i++)
    {
        v[i]=v[i-1]+((i-1)*4);
    }
    cout << v[n] << endl;
    
 
 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back

long long int a[200010],b[200010],c[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, m, t, i, j,k,f=0,mn=0,mx;
    long long sum=0;
    
    cin >> n;
    cin >> a[0];
    for(i=1;i<n;i++)
    {
        cin >> m;
        a[i]=m+a[i-1];
    }
    sum = (a[n-1]+1)/2;
    int pos = lower_bound(a, a+n, sum) - a;
    cout << pos+1 << endl;
 
      
 
 
 
    return 0;
}

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
    long long int n, m, t, i, j,k,f=0,mn,mx;
    
    vi v(10000);
 
  
    cin >> n;
    if(n%2==0)
    {
        cout << n/2 << endl;
    }
    else
    {
        f=n/2;
        n=n-(2*n);
        cout << n+f << endl;
    }
 
 
    return 0;
}
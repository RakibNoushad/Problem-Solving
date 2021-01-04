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
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, m, t, i, j,k,f=0,mn=0,mx,sum=0,l,d;
    cin >> k >> l >> m >> n >> d;
    f=d/k;
    for(i=1;i<=f;i++)
    {
        a[i*k]=1;
    }
    f=d/l;
    for(i=1;i<=f;i++) a[i*l]=1;
    f=d/m;
    for(i=1;i<=f;i++) a[i*m]=1;
    f=d/n;
    for(i=1;i<=f;i++) a[i*n]=1;
 
    for(i=1;i<=d;i++)
    {
        if(a[i]==0) sum++;
    }
 
    cout << d-sum << endl;
 
return 0;
}
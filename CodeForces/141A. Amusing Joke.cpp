#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5
 
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n=1, t, i, j,k,f=0,mn=0,mx,l,m;
    LLI sum =0;
    
    cin >> x >> y >> z;
    int nx, ny, nz;
    nx = strlen(x);
    ny = strlen(y);
    nz = strlen(z);
    for(i=0;i<nx;i++)
    {
        j=x[i]-65;
        a[j]++;
    }
    for(i=0;i<ny;i++)
    {
        j=y[i]-65;
        a[j]++;
    }
    for(i=0;i<nz;i++)
    {
        j=z[i]-65;
        b[j]++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]!=b[i]) f++;
    }
    if(f>=1) cout << "NO" << endl;
    else cout << "YES" << endl;
 
return 0;
}
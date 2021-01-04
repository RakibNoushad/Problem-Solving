#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5
#define up(a,b) upper_bound(a.begin(),a.end(),b)-a.begin()

char x[200010],y[200010],z[200010];
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n=1, t, i, j,k,f=0,mn=0,mx,l,m,dif;
    LLI sum =0;
    
    cin >> n;
    vi a(n);
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
 
    cin >> m;
    vi b(m);
    for(i=0;i<m;i++)
    {
        cin >> b[i];
    }
 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
 
    if(a[n-1]<=b[m-1])
    {
        mn = a[n-1];
        mn++;
        int pos = upper_bound(b.begin(), b.end(), mn)-b.begin();
        pos--;
        m = pos +1;
    }
    else
    {
        mn = b[m-1];
        mn++;
        int pos = upper_bound(a.begin(),a.end(), mn)-a.begin();
        pos--;
        n = pos +1;
    }
    i=n-1;
    j=m-1;
    while(i>=0 && j>=0)
    {
        dif = abs(a[i]-b[j]);
        if(dif<2)
        {
            f++;
            i--;
            j--;
        }
        else if(a[i]>=b[j]) i--;
        else if(b[j]>=a[i]) j--;
    }
    cout << f << endl;
 
 
 
return 0;
}
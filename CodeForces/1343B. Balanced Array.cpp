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
    int n, m, t, i, j,k,f=0,mn=0,mx,sum=0,l,d,sun=0;
    
    vi v(150000);
    v[0]=1;
 
    cin >> t;
    
    while(t--)
    {
 
        cin >> n;
        j=2;
        sum=0,sun=0;
        m=n/2;
        if(m%2) cout << "NO\n";
        else{
        for(i=1;i<=m;i++)
        {
            a[i]=j;
            sun+=a[i];
            j+=2;
        }
        k=1;
        for(i=m+1;i<n;i++)
        {
            a[i]=k;
            sum+=a[i];
            k+=2;
 
        }
        l=sun-sum;
        if(l%2)
        {
            a[n]=l;
            cout << "YES\n";
            for(i=1;i<n;i++)
            {
                cout << a[i] << " ";
            }
            cout << a[n]<< endl;
        }
        else cout << "NO\n";
 
    }
    }
 
return 0;
}
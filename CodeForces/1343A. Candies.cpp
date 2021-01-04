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
    
    vi v(150000);
    v[0]=1;
 
    for(i=1;i<1500;i++)
    {
        v[i]=(int) pow(2,i)+0.5;
    }
    cin >> t;
    while(t--)
    {
 
        cin >> n;
        if(n<3) cout << n << endl;
        long long int s=1;
        for(i=1;i<1500;i++)
        {
            s+=v[i];
            if(n%s==0)
            {
                sum = n/s;
                cout << sum << endl;
                break;
            }
 
        }
    }
 
return 0;
}

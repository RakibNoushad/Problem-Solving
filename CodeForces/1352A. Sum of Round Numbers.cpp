#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pw(x,y) (int)pow(x,y)+0.5
#define ub(a,b)  upper_bound(a.begin(),a.end(),b)-a.begin()
#define lb(a,b)  lower_bound(a.begin(),a.end(),b)-a.begin()
#define srt(a)   sort(a.begin(),a.end())
#define wl(t)    cin >> t; while(t--)
#define fr(t)  cin >> t; for(i=0;i<t;i++)
 
const int MX = 1e5 + 7 ;
const int INF = 1e8 + 7 ;
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010],c[200010],d[200010];
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n=1, t, i,mn=200,m,pos,mx=0,l,dif,f=0,k,j;
    LLI sum=0,sumo;
    wl(t)
    {
        cin >> n;
        f=0;
        m=n;
        while(n>10)
        {
            if(n%10)
            {
                f++;
            }
            n/=10;
        }
        if(f==0)
        {
            cout << f+1 << endl << m << endl;
        }
        else
        {
            n=m;
            i=0;
            while(n>0)
            {
                a[i]=n%10;
                n/=10;
                i++;
            }
            k=0;
            for(j=0;j<i;j++)
            {
                if(a[j]>0)
                {
                    b[k]=a[j]*pw(10,j);
                    a[j]=0;
                    k++;
                }
            }
            cout << f+1 << endl;
            for(i=0;i<f;i++) cout << b[i] << " ";
                cout << b[f] << endl;
        }
    }
 
return 0;
}
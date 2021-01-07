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
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n, t, i, j,k,mn=200,m,pos,mx=0,l;
    
    wl(t)
    {
        cin >> n >> m;
        mx=0;
        int count=0,f=0,countd=0;
        LLI sum=0,di=0,mi;
        int p,q,s=0;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            b[a[i]]++;
            if(a[i]>mx) mx=a[i];
        }
        j=0;
            for(i=1;i<=mx;i++)
            {
                if(b[i]>0) 
                    {
                        f++;
                        d[j]=i;
                        j++;
                        b[i]=0;
                    }
 
            }
        if(n==m)
        {
            cout << n*2 <<endl;
            for(i=0;i<n;i++)cout << a[i] << " ";
            for(i=0;i<n-1;i++) cout << a[i] << " ";
                cout << a[n-1] << endl;
        }
        else
        {
            if(f>m) cout << "-1\n";
            else if(f==m)
            {
                
                cout << n*j << endl;
                for(i=1;i<n;i++)
                {
                    for(k=0;k<j;k++) cout << d[k] << " ";
                }
                for(k=0;k<j-1;k++) cout << d[k] << " ";
                    cout << d[j-1]<< endl; 
            }
            else
            {
                p=m-f;
                cout << n*m << endl;
                    for(i=1;i<n;i++)
                    {
 
                        for(k=0;k<j;k++)
                            {
                            cout << d[k] << " ";
                            }
                        for(l=1;l<=p;l++) cout << l << " ";
                    }
                    for(k=0;k<j;k++)
                            {
                            cout << d[k] << " ";
                            }
                        for(l=1;l<p;l++) cout << l << " ";
                        cout << p << endl;
 
            }
        }
 
    }

return 0;
}
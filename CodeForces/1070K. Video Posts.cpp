#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5
#define ub(a,b) upper_bound(a.begin(),a.end(),b)-a.begin()
#define lb(a,b) lower_bound(a.begin(),a.end(),b)-a.begin()
#define srt(a) sort(a.begin(),a.end())
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010];
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n=1, t, i, j,k,f=0,mx,l,m,dif=0,pos;
    LLI sum =0;
    
    cin >> n >> k;
    vi v(n),u(k);
    cin >> v[0];
    for(i=1;i<n;i++)
    {
        cin >> j;
        v[i] = v[i-1]+j;
    }
    if(v[n-1]%k)
    {
        cout << "No\n";
    }
    else
    {
        dif = v[n-1]/k;
        for(i=0;i<k;i++)
        {
 
            pos = lower_bound(v.begin(),v.end(),dif)-v.begin();
            if(v[pos]!=dif)
            {
                f = 1;
                break;
            }
            u[i]=pos+1;
            dif= dif+ (v[n-1]/k);
        }
        if(f) cout << "No\n";
        else
        {
            cout << "Yes\n";
            dif =0;
            for(i=0;i<k-1;i++)
                {
                    u[i]= u[i]-dif;
                    cout<< u[i] << " ";
                    dif+=u[i];
 
                }
                u[k-1] = u[k-1]-dif;
                cout << u[k-1] << endl;
        }
 
 
    }
 
return 0;
}

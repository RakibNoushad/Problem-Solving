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
    int n, t, i, j,k,f=0,mn,l,m,dif=0,pos;
    
    cin >> t;
    while(t--)
    {
        cin >> x;
        n= strlen(x);
        f=0;
        for(i=1;i<n;i++)
        {
            if(x[i]!=x[i-1]) f=1;
        }
        if(f!=1) cout << x << endl;
        else 
        {
            j=0;
            for(i=0;i<n;i++)
            {
                if(x[i]=='1' && x[i+1]=='0' && i<n-1)
                {
                    y[j]='1';
                    j++;
                    y[j]='0';
                    j++;
                    i++;
                }
                else if(x[i]=='1')
                {
                    y[j]='1';
                    j++;
                    y[j]='0';
                    j++;
                }
                else
                {
                    y[j]='1';
                    j++;
                    y[j]='0';
                    j++;
                }
            }
            for(i=0;i<j;i++)
            {
                cout << y[i];
            }
            cout << endl;
        }
    }
 
return 0;
}
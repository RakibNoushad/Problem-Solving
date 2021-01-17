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
#define w(t)    cin >> t; while(t--)
#define fr(t)  cin >> t; for(i=0;i<t;i++)
 
bool isPrime(int n){if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2)if(n%i==0) return false;
    return true;}
 
const int MX = 1e5 + 7 ;
const int INF = 1e9 + 7 ;
 
char x[200010],y[200010],z[1000010];
int a[200010],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI t, n,k, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0,r;
    LLI  sum=0,maxSum, curSum,sum2;
    
    
    w(t)
    {
        LLI final[26];
        memset(final,0,sizeof(final));
        cin >> n >> m;
        cin >> x;
        for(i=0;i<m;i++)
        {
            cin >> a[i];
        }
        sort(a,a+m);
        LLI cur[26];
        memset(cur,0,sizeof(cur));
        j=0;
        for(i=0;i<n;i++)
        {
            cur[x[i]-'a']++;
            if(j<m)
            {
                while(a[j]==i+1) 
                {
                    for(k=0;k<26;k++) final[k]+=cur[k];
                        j++;
                    if(j>=m) break;
                }

            }
        }
        for(k=0;k<26;k++) final[k]+=cur[k];
            for(k=0;k<26;k++) cout << final[k] << " ";
                cout << endl;

        
    }
        
return 0;
}
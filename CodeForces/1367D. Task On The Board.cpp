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
        cin >> x;
        cin >> m;
        for(i=0;i<m;i++)
        {
            cin >> a[i];
        }
        
        n=strlen(x);
        int cnt[26]={0};
        memset(cnt,0,sizeof(cnt));
        for(i=0;i<n;i++)
        {
            cnt[x[i]-'a']++;
        }
        vector<char> v(m);

        while(1)
        {
            vi cur;
            for(i=0;i<m;i++)
            {
                if(a[i]==0) {cur.pb(i); a[i]=INF;}

            }

            if(cur.size()==0) break;
            for(i=25;i>=0;i--)
            {
                if(cnt[i]>=cur.size()) {
                    for(j=0;j<cur.size();j++) {v[cur[j]]=char(i+'a');}
                        cnt[i]=0;
                        break;
                        
                }
                else cnt[i]=0;
            }
            for(j=0;j<cur.size();j++){
                for(i=0;i<m;i++)
                {
                    a[i]-=abs(i-cur[j]);
                }
            }
        }

        for(i=0;i<m;i++) cout << v[i];
        cout << endl;


        
    }
        
return 0;
}
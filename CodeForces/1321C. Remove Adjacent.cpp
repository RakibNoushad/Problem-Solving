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
int mod(int n)
{
    int m=0;
    while(n>=10)
    {
        m+=n%10;
        n/=10;
    }
    return m+n;
}
 
const int MX = 1e5 + 7 ;
const int INF = 1e9 + 7 ;
const long long LINF = 9e18 + 7;
 
char x[200010],y[200010],z[1000010];
long long a[200010],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI t, n,k, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0,r;
    LLI  sum=0,maxSum, curSum;
    

    cin >> n;
    cin >> x;
    int ans=0;
    int ch[26]={0};
    for(i=0;i<n;i++)
    {
        ch[x[i]-'a']++;
    }
    for(j=25;j>0;j--){
        if(ch[j]){
            for(i=0;i<n;i++)
            {
                if(x[i]-'a'==j)
                {
                    if(i>0)
                    {
                        for(k=i-1;k>=0;k--)
                        {
                            if(x[k]+1==x[i]){x[i]='.'; ans++; i=k; ch[j]--; break;}
                            else if(x[k]=='.') continue;
                            else break;
                        }
                    }
                    if(i<n-1)
                    {
                        for(k=i+1;k<n;k++)
                            {
                                if(x[k]+1==x[i]){x[i]='.'; ans++; i=k; ch[j]--; break;}
                                else if(x[k]=='.') continue;
                                else break;
                            }
                    }
                }   
            }
            if(ch[j]){
            for(i=n-1;i>=0;i--)
            {
                if(x[i]-'a'==j)
                {
                    if(i>0)
                    {
                        for(k=i-1;k>=0;k--)
                        {
                            if(x[k]+1==x[i]){x[i]='.'; ans++; i=k; break;}
                            else if(x[k]=='.') continue;
                            else break;
                        }
                    }
                    if(i<n-1)
                    {
                        for(k=i+1;k<n;k++)
                            {
                                if(x[k]+1==x[i]){x[i]='.'; ans++; i=k; break;}
                                else if(x[k]=='.') continue;
                                else break;
                            }
                    }
                }   
            }
        }
        }
    }
    cout << ans << endl;
 
 
return 0;
}
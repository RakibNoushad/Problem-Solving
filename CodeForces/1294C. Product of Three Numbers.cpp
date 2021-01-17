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

 int isPrime(int n){if(n%2==0) return 2;
    for(int i=3;i*i<=n;i+=2)if(n%i==0) return i;
    return 0;}
 
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
        cin >>n;
        if(isPrime(n)==0) cout << "No\n";
        else
        {
            r=isPrime(n);
            m=n/r;
            k=isPrime(m);
            if(k==0) cout << "No\n";
            else
            {
                l=m/k;
                
                    if(k==2)
                    {
                        if(isPrime(l)==0) {cout << "No\n"; continue;}
                        else{
                            k+=2;
                            f=0;
                            while(m%k!=0 && k<m) {k+=2; f=1;}
                        }
                    }
                    if(k==r)
                    {
                        k++;
                            f=0;
                            while(m%k!=0 && k<m) {k++; f=1;}
                            if(f==0) {cout << "No\n"; continue;}
                    }
                    if(k==m/k || m/k==1 || m/k==r) cout << "No\n";
                    else{
                    cout << "YES\n";
                    cout << r << " " << k << " " << m/k << endl;
                }

            }
        }


        
    }
        
return 0;
}
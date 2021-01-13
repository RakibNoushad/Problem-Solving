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
 
const int MX = 1e5 + 7 ;
const int INF = 1e8 + 7 ;
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010],c[200010],d[200010];

#define MAX 400

bool isPrime(int n)
{
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n, t, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,k=-1,j,l=0;
    double sum=0;
    

   w(t)
   {
    cin >> n;
    if(n==1) cout << "FastestFinger\n";
    else if(n==2 || n%2) cout << "Ashishgup\n";
    else
        {
            if(isPrime(n/2) && (n/2)>2) {cout << "FastestFinger\n"; continue;}
            m=n;
            while(m>1)
            {
                if(m%2==0) m/=2;
                else break;
            }
            if(m==1) {cout << "FastestFinger\n";continue;}
            cout << "Ashishgup\n";


        }

    
   }
       
return 0;
}
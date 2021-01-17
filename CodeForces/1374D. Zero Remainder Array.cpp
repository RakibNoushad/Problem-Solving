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
 
char x[200010],y[200010],z[1000010];
long long a[200010],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI t, n,k, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0,r;
    LLI  sum=0,maxSum, curSum,temp;
    vector<long long> v(200010);

    w(t)
    {
        cin >> n >> k;

       for(i=0;i<n;i++)
       {
        cin >> a[i];
        if(a[i]%k==0) b[i]=0;
        else b[i]=k-(a[i]%k);
       }
       sort(b,b+n);
       r=1; maxSum=b[n-1],temp=0;
           for(i=1;i<n;i++)
           {
            if(b[i]==b[i-1] && temp==0 && b[i]!=0) {temp=b[i]+k;}
            else if(b[i]==b[i-1] && temp && b[i]!=0) temp+=k;
            else temp=0;
            if(temp>maxSum) maxSum=temp;
           }

           if(maxSum) maxSum++;
       cout << maxSum << endl;



    }


return 0;
}
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

const int INF = 1e9 + 7 ;
const long long LINF = 9e18 + 7;
 
bool isPrime(int n){if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2)if(n%i==0) return false;
    return true;}
 

 
char x[200010],y[200010],z[1000010];
int a[200010],b[200010],c[200010],d[200010];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        const clock_t start = clock();
    #endif
    int t, k, i=0,mn=INF,mx=0,j,n,m;
    LLI  sum=0,maxSum, curSum;
    set<int> st;
    
  w(t)
  {
    cin >> n;
    char cell[8][8];
    for(i=0;i<8;i++)
        for(j=0;j<8;j++) cell[i][j]='X';
    cell[7][7]='O';
    int curr=7, curc=7;
    n--;
    while(n)
    {
        if(curc>0 && n) {curc--; cell[curr][curc]='.'; n--;} 
        if(curc==0) {curc=8;curr-=1;}
    }
    for(i=0;i<8;i++)
        {for(j=0;j<8;j++) cout << cell[i][j];
        cout << endl;}
        cout << endl;
    
  }
    
   
return 0;
}
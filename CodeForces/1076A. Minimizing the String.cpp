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
    int n=1, t, i, j,k,f=0,mx,l,m,dif;
    LLI sum =0;
    
    cin >> n;
    cin >> x;
    int temp =97;
    for(i=0;i<n-1;i++)
    {
        if(x[i]>x[i+1])
        {
            temp= x[i];
            break;
        }
    }
    if(temp==97) temp= x[n-1];
    for(i=0;i<n;i++)
    {
        if(x[i]==temp)
        {
            temp=0;
        }
        else cout << x[i];
    }
    cout << endl;
 
return 0;
}
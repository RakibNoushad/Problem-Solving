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
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n,k, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0;
    LLI sum=0;
    string s[110];
    string t,mid;
    std::vector<string> left,right;
    set<string> dict;
    cin >> n >> m;
    for(i=0;i<n;i++)
    {
        cin >> s[i];
        dict.insert(s[i]);
    }
    for(i=0;i<n;i++)
    {
        t=s[i];
        reverse(t.begin(),t.end());
        if(t==s[i]) mid=t;
        else if(dict.find(t) != dict.end())
        {
            left.pb(s[i]);
            right.pb(t);
            dict.erase(s[i]);
            dict.erase(t);
        }

    }
    cout << left.size()*m*2+mid.size() << endl;

    for(i=0;i<left.size();i++)
    {
        cout << left[i];
    }
    cout << mid;
    reverse(right.begin(),right.end());
    for(i=0;i<right.size();i++)
    {
        cout << right[i];
    }
    cout << endl;


        
return 0;
}
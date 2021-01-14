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
const int INF = 1e8 + 7 ;
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI t,n,k, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0;
    LLI sum=0;
   
    cin >> n;
    int ch[6];
    memset(ch,0,sizeof(ch));
    for(i=0;i<n;i++)
    {
        cin >> x;
        if(x[0]=='p') ch[0]=1;
        else if(x[0]=='g') ch[1]=1;
        else if(x[0]=='b') ch[2]=1;
        else if(x[0]=='o') ch[3]=1;
        else if(x[0]=='r') ch[4]=1;
        else ch[5]=1;
    }

    
    cout << 6-n << endl;
    for(i=0;i<6;i++)
    {
        if(ch[i]==0)
            {
                if(i==0) cout << "Power\n";
                else if(i==1) cout << "Time\n";
                else if(i==2) cout << "Space\n";
                else if(i==3) cout << "Soul\n";
                else if(i==4) cout << "Reality\n";
                else cout << "Mind\n";
            }

    }


        
return 0;
}
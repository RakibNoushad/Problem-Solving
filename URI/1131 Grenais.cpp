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
#define wl(t)    cin >> t; while(t--)
#define fr(t)  cin >> t; for(i=0;i<t;i++)

const int MX = 1e5 + 7 ;
const int INF = 1e8 + 7 ;
 
char x[200010],y[200010],z[200010];
LLI a[200010],b[200010],c[200010],d[200010];

 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n=1, t, i, j,k,mn=200,m,pos,mx=0,l,dif,f=1;
    LLI sum=1;
    int inter=0, germio=0, total=0, draw=0;

    while(n==1)
    {
      cin >> i >> j;
      if(i>j) inter++;
      else if(j>i) germio++;
      else draw++;
      total++;
      cout << "Novo grenal (1-sim 2-nao)" << endl;
      cin >> n;
    }
    cout << total << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << germio << endl;
    cout << "Empates:" << draw << endl;
    if(inter>germio) cout << "Inter venceu mais" << endl;
    else if(inter==germio) cout << "Não houve vencedor" << endl;
    else cout << "Gremio venceu mais" << endl;

   

return 0;
}
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
const long long LINF = 9e18 + 7;
 
char x[200010],y[200010],z[1000010];
int a[200010],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        const clock_t start = clock();
    #endif
    LLI t, n,k, i=0,mn=INF,m,pos=0,mx=0,f=0,j,l=0,r;
    //LLI  sum=0,maxSum, curSum; 
    int cas=1;
    
  
   while(1)
   {
    cin >> n;
    map<int, vector<int> > edges;
    set<int> st;
    if(n==0) break;
    for(i=0;i<n;i++)
    {
        cin >> l >> r;
        edges[l].pb(r);
        edges[r].pb(l);
        st.insert(l);
        st.insert(r);
    }
    while(1)
    {
        cin >> l >> r;
        if(l==0 && r==0) break;
        queue<int> q;
        map<int, int> dis;
        map<int, bool >vis;
        int done=1;
        q.push(l);
        vis[l]=1;
        dis[l]=0;
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            for(i=0;i<edges[u].size();i++)
            {
                int v=edges[u][i];
                if(!vis[v])
                {
                    vis[v]=1;
                    dis[v]=dis[u]+1;
                    if(dis[v]<=r)
                    {
                        q.push(v);
                        done++;
                    }
                }
            }
        }
        
        cout << "Case " << cas++ << ": " << st.size()-done
        << " nodes not reachable from node " << l << " with TTL = "
        << r << "." << endl;
    }
   }
   
    
   
return 0;
}
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

#define MAX 400
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI n, t, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,k=-1,j,l=0;
    LLI sum=0,temp,ev;
    bool fl=true;

    w(t)
    {
        cin >> n;
        temp=0,ev=0;
        k=n*2;
        vi v(k);
        for(i=0;i<k;i++)
        {
            cin >> v[i];
        }

        m=n-1;
        j=0;

        for(i=0;i<k;i++)
        {
            if(v[i]%2 && temp)
            {
                cout << temp << " " << i+1 << endl;
                m--;
                temp=0;
            }
            else if(v[i]%2) temp=i+1;
            if(m==0) break;
        }

        for(i=0;i<k;i++)
        {
            if(v[i]%2==0 && ev)
            {
                cout << ev << " " << i+1 << endl;
                m--;
                ev=0;
            }
            else if(v[i]%2==0) ev=i+1;
            if(m==0) break;
        }            
    }


        
return 0;
}
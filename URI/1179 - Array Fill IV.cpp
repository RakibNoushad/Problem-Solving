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
int a[200010],b[200010],c[200010],d[200010];

 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n=1, t, i,mn=200,m,pos,mx=0,l,dif,f=0,k,j;
    double sum=1,sumo;
    j=0;k=0;
    
    for(i=0;i<15;i++)
    {
        cin >> n;
        if(n%2)
        {
            if(j%5==0 && j>0)
            {
                for(l=0;l<5;l++)
                {
                    cout << "impar[" << l << "] = " << a[l] << endl;
                }
                j=j%5;
            }
            a[j]=n;
            j++;
        }
        else
        {
            if(k%5==0 && k>0)
            {
                for(l=0;l<5;l++)
                {
                    cout << "par[" << l << "] = " << b[l] << endl;
                }
                k=k%5;
            }
            b[k]=n;
            k++;
        }
        if(i==14)
            {
                for(l=0;l<j;l++)
                {
                    cout << "impar[" << l << "] = " << a[l] << endl;
                }
                for(l=0;l<k;l++)
                {
                    cout << "par[" << l << "] = " << b[l] << endl;
                }
                
            }


    }

    


   

return 0;
}
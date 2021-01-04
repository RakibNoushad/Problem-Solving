#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back

LLI a[200010],b[200010],c[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, m, t, i, j,k,f=0,mn=0,mx,sum=0,l,d;
    for(i=0;i<4;i++)
    {
        cin >> a[i];
    }
    sort(a,a+4);
    l=a[0];
    for(i=1;i<4;i++)
    {
        if(a[i]==l && a[i])
        {
            a[i]=0;
            f++;
        }
        else l=a[i];
    }
    cout << f << endl;
 
return 0;
}
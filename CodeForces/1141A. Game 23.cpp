#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back

char a[200010],b[200010],c[200010];
 
int main()
{
    long long int n, m, t, i, j,k,f=0,mn=0,mx;
    
    vi v(10000);
 
  
    cin >> n >> m;
    if(m%n) cout << "-1" << endl;
    else
    {
        t= m/n;
    while(t>1)
    {
        if(t%3==0)
        {
            t=t/3;
            f++;
        }
        else if(t%2==0)
        {
            t=t/2;
            f++;
        }
        else
            {cout << "-1" << endl;
        mn=1;
        break;
        
    }
    }
    if(mn==0) cout << f << endl;
}
 
 
    return 0;
}
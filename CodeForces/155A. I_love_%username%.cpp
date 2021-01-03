#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back

int a[200010],b[200010],c[200010];
 
int main()
{
    int n, m, t, i, j,k,f=0,mn,mx;
    
    vi v(1000);
 
    cin >> n;
    cin >> m;
    mn =m;
    mx=m;
    for(i=1;i<n;i++)
    {
        cin >> m;
        if(m>mx)
        {
            f++;
            mx=m;
        }
        else if(m<mn)
        {
            f++;
            mn=m;
        }
    }
    cout << f << endl;
 
 
    return 0;
}
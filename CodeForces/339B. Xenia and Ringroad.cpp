#include<bits/stdc++.h>
using namespace std;
 
#define SQR(x) ((x)*(x))

int x[200010],y[200010],z[200010];
 
int main()
{
    int n, m, t, i, j,p,q,f=1;
    long long int ans=0;
    cin >> n >> m;
    for(i=0;i<m;i++)
    {
        cin >> x[i];
        if(x[i]>=f)
        {
            ans+=(x[i]-f);
            f=x[i];
        }
        else
        {
            ans=ans+ (n-f)+x[i];
            f=x[i];
        }

    }
    cout << ans << endl;
 
 
    return 0;
}
#include<bits/stdc++.h>
#include<string>
using namespace std; 
 
char str[200010], a[200010],x[200010];
int main()
{
    long long int n,i=0,j=2,s=0,m,t, f=0,k;
    double y,z;
    int check =1;
    long long int bo,bt;
        cin >> n >> m >> k;
 
        if(n+m<=k) cout << 2*(n+m) << endl;
        else if(n+k<=m)
        {
            cout << 2*(n+k) << endl;
        }
        else if(m+k<=n) cout << 2*(m+k) << endl;
        else cout << n+m+k << endl;
 
 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
 
char a[200010],c[200010];
int b[200010];
 
int main()
{
    int n, m, t, i, j,k, s=0,l,g,ma=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        if(i>0 && a[i-1]!=a[i])
        {
            s=1;
            c[0]=a[i-1];
            c[1]=a[i];
 
        }
    }
    if(s==0) cout << "NO\n";
    else 
    {
        cout << "YES\n";
        cout << c[0] << c[1] << endl;
    }
 
 
    return 0;
}
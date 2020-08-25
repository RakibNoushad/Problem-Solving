#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ulli;
typedef long long int  lli;
 
#define SQR(x) ((x)*(x))
 
 
char a[200010],c[200010];
 
int main()
{
    int n, m, t, i, j,k,f=1;
    cin >> t;
    cin >> a;
    for(i=0;i<t;)
    {
        cout << a[i];
        i=f+i;
        f++;
 
    }
    cout << endl;
 
 
 
    return 0;
}
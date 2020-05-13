#include<bits/stdc++.h>
using namespace std;
char c[10010];
 
int main()
{
    int n,m,i,j,q,sx=0,sy=0,sz=0,k,min=1000000010,r,t,x,y,z,f=0,max=0;
    char a[100010],b[10010];
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> z;
        sx+=x;
        sy+=y;
        sz+=z;
    }
    if(sx==0 && sy==0 && sz==0)
        cout << "YES\n";
    else cout << "NO\n";
 
 
 
 
    return 0;
}
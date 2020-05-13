#include<bits/stdc++.h>
using namespace std;
char c[10010];
 
int main()
{
    int n,m,i,j,q,s=0,k,miny=1000000010,r,t,x,y,f=0;
    char a[10010],b[10010];
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n!=s)
        {
            f++;
            s=n;
        }
 
    }
    cout << f << endl;
 
 
    return 0;
}
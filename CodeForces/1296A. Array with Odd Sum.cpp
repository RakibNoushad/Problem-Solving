#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];
 
 
int main()
{
    int n,m,i,j,q,y,aa=0,bb,f=0,min=10000010,t,r,u,max=0,k=0,s=0,o,e;
    char a[10010];
    cin >> t;
    while(t--)
    {
 
        cin >> n;
        s=n;
        o=0;
        e=0;
        while(s--)
        {
           cin >> m;
           if  (m%2) o++;
           else e++;
 
        }
        if((n%2==0 && o==n) || e==n) cout << "NO\n";
        else cout << "YES\n";
 
    }
 
 
    return 0;
}
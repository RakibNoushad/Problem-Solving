#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];
 
int main()
{
    int n,m,i=0,j,q,y,aa,bb,f=0,k,min=10000010,t,r,s=0,u;
    double div;
    int a[10010];
    cin >> n >> m;
    for(i=0;i<n*m;i++)
    {
        cin >> b;
 
        if(b[0]=='C' || b[0]=='M' || b[0]=='Y')
            f=1;
    }
    if(f==1) cout << "#Color\n";
    else cout << "#Black&White\n";
 
    return 0;
}
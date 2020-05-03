#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
char b[10010];

int main()
{
    int n,m,i=0,j,q,y,aa,bb,f=0,k,min=10000010,t,r,s=0,u;
    double div, ek, dui;
    char a[100010];
    cin >> t;
    while(t--)
    {
    cin >> n;
    f=0;
    for(i=n-1;i>=1;i--)
    {
        if(n%i==0) f+=i;
    }
    if(f==n) cout << n << " eh perfeito\n";
    else cout << n << " nao eh perfeito\n";
    }


    return 0;
}

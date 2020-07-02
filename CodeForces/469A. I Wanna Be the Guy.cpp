#include<bits/stdc++.h>
using namespace std;
 
char a[200010],c[200010];
int b[200010];
 
int main()
{
    int n, m, t, i, j,p,q,f=0;
    cin >> n;
    cin>> p;
    while(p--)
    {
        cin>> i;
        b[i]++;
    }
    cin>> q;
    while(q--)
    {
        cin >> i;
        b[i]++;
    }
    for(i=1;i<=n;i++)
    {
        if(b[i]==0)
        {
            f=1;
            continue;
        }
    }
    if(f==1) cout<< "Oh, my keyboard!\n";
    else cout << "I become the guy.\n";
 
 
    return 0;
}
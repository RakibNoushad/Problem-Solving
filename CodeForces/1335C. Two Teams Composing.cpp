#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    int n, m, t, j,k=0, s=0,l,g,mx=0,i;
    cin >> t;
    while(t--)
    {
        int a[200010]={0};
        s=0,k=0,mx=0;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> m;
            a[m]++;
            if(m>mx) mx=m;
        }
        for(i=1;i<=mx;i++)
        {
            if(a[i]>s) s=a[i];
            if(a[i]>0) k++;
        }
        if(s==k) s--;
        j= min(s,k);
        cout << j << endl;
 
 
 
    }
 
 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
char c[10010];
 
int main()
{
    int n,m,i,j,q,y,aa,bb,s=0,k,min=1000000010,r,t;
    char a[10010],b[10010];
    cin >> t;
    while(t--)
    {
        cin >> i >> j >> k >>n;
        s=i+j+k+n;
        q=max(i,j);
        y=max(q,k);
       // cout << y <<endl;
        if(s%3!=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            i=y-i;
            j=y-j;
            k=y-k;
            m=n-i-j-k;
            if(m%3==0 && m >=0)
              cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
 
    return 0;
}
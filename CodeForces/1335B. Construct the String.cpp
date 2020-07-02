#include<bits/stdc++.h>
using namespace std;
 
//long long int a[200010],b[200010],c[200010];
 
int main()
{
    int n, m, t, j,k, s=0,l,g, a, b;
    cin >> t;
    while(t--)
    {
        char i=97;
        cin >> n >> a >> b;
        if(a==b)
        {
            
            while(n--)
            {
                cout << i;
                i++;
                if(i==123) i=97;
            }
        }
        else if(b==1)
        {
            while(n--){cout << i;}
        }
        else
        {
            m=b+97;
            while(n--)
            {
                if(i==m) i=97;
                cout << i;
                i++;
            }
        }
        cout << endl;
    }
 
 
    return 0;
}
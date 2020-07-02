#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    long long int n, m, t, i, j,p,q,f=0,a,b,c,d,x,y,z;
    cin>>t;
    while(t--)
    {
        cin >> x>> n>> m;
        while(x>20 && n>0)
        {
            x=(x/2)+10;
            n--;
        }
        while(m>0 && x>0)
        {
            x-=10;
            m--;
        }
        if(x>0) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
 
 
    return 0;
}
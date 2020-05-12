#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,i=1,j,q,y,aa,bb,f=0,s=1;
    char a[11],b[11];
 
    cin >> n;
    while(n>=s)
    {
        if(s==n)
        {
            f=1;
            break;
        }
        i++;
        s+=i;
    }
    if(f==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

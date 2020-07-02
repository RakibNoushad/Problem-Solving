#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    int n,i=0,j=2,u=0,l,f=0,min=1200,max=0,firstx, lastn,m, flag=0;
    char a[110], b[110];
    double y,z;
 
    cin >> a >> b;
    n = strlen(a);

    m=n-1;
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[m])
        {
            f++;
        }
        m--;
    }

    if(f>=1)
        cout << "NO\n";
    else
        cout << "YES\n";
 
    return 0;
}
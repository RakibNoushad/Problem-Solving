#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    long long int n,i=0,j=2,s=0,m,t, flag=0;
    int a[110], b[110];
    double y,z;
    int check =1;
 
    cin >> n >> m;
    if(m<=n)
        i++;
    while(j<=n)
    {
        if(m%j==0 && (m/j)<=n)
            i++;
        j++;
    }
    cout << i << endl;
 
    return 0;
}
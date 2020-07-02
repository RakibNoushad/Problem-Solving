#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];
 
 
 
char b[200010], a[200010],x[200010];
int main()
{
    long long int n,i=0,j=2,s=0,m,t, flag=0;
    //char a[110], b[110];
    double y,z;
    int check =1;
 
    cin >> n >> m;
    if(n>=m)
    {
        cout << m << " ";
        n=n-m;
        cout << n/2 << endl;
    }
    else
    {
        cout << n << " ";
        m=m-n;
        cout << m/2 << endl;
    }
    return 0;
}
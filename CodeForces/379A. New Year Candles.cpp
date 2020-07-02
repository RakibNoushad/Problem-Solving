#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];
 
 
 
char b[200010], a[200010],x[200010];
int main()
{
    int n,i=0,j=2,s=0,m, flag=0;
    //char a[110], b[110];
    double y,z;
 
    cin >> n >> m;
    while(n)
    {
        s+=n;
        j=(n+i)%m;
        n= (n+i)/m;
        i=j;
    }
    cout << s << endl;
 
    return 0;
}
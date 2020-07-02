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
    j=m;
    while(j)
    {
        s++;
        j=j/10;
    }
    if(s>n)
        cout << "-1";
    else if(m==0) cout << "-1";
    else
    {
        cout << m;
        n-=s;
        while(n--)
        {
            cout << "0";
        }
    }
    cout << endl;
 
    return 0;
}
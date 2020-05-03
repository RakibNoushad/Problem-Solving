#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];

int main()
{
    int n,m,i,j,q,y,aa,bb,f=0,k,min=10000010,t,r,s,u;
    char a[100];
    cin >> n >> m;
    if(n>m)
    {
        m++;
        for(;m<n;m++)
        {
            if(m%2!=0) f=f+m;
            //cout << f << endl;

        }
    }
    else if(n<m)
    {
        n++;
        for(;n<m;n++)
        {
            if(n%2!=0) f+=n;
        }
    }
    else f=0;
    cout << f << endl;


    return 0;
}

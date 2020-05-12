#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];

int main()
{
    int n=1,m=0,i,j,q,y,aa,bb,f=0,min=10000010,t,r,s=0,u,max=0, al=0, gas=0, dis=0;
    double div,baki=0.0;
    cin >> n >> m;
    if(n>m)
    {
        j=n;
        n=m;
        m=j;
    }
    n++;
    for(;n<m;n++)
    {
        if(n%5==2 || n%5==3)
            cout << n << endl;
    }


    return 0;
}

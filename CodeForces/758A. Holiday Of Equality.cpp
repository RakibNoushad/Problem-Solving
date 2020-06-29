#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];
 
int main()
{
    int n,m,i,j,q,y,aa,bb,f=0,k,min=10000010,t,r,s=0,u,max=0;
    double div;
    int a[10010];
    cin >> t;
    for(i=0;i<t;i++)
    {
 
        cin >> a[i];
        if(a[i]>max)
            max=a[i];
 
    }
    for(i=0;i<t;i++)
    {
        s=s+(max-a[i]);
    }
    cout << s << endl;
 
 
    return 0;
}
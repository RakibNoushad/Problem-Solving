#include<bits/stdc++.h>
#include<string>
using namespace std;
int b[10010];
 
int main()
{
    long long int n,m,i,j,q,y,aa,bb,f=0,min=10000010,t=1,r,u,max=0,k;
 
    long long int s=0;
    double div;
    int a[10010];
    cin >> t;
 
    while(t--)
    {
        cin >> n >> m >> k;
        s=0;
 
        if(k%2)
        {
            s+=(n*((k/2)+1));
            s-=(m*(k/2));
        }
 
        else
        {
            s+=(n*(k/2));
            s-=(m*(k/2));
        }
 
        cout << s << endl;
 
 
    }
 
 
 
 
 
 
 
    return 0;
}
#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];
 
int main()
{
    int n,m,i=0,j,q,y,aa,bb,f=0,k,min=10000010,t,r,s=0,u;
    double div;
    int a[10010];
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n<=0 && s<=0)
        {
            f++;
        }
        else if(n>0) s+=n;
        else if(n<=0) {s+=n;
        if(s<0) s=0;
 
        }
 
    }
    cout << f << endl;
 
    return 0;
}
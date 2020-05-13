#include<bits/stdc++.h>
using namespace std;
char c[10010];
 
int main()
{
    int n,m,i,j,q,s=0,k,min=1000000010,r,t,x,y,f=0,max=0;
    char a[100010],b[10010];
    cin >> t >> n >> m;
    if(m<4 || n<2 || t<1) cout << s << endl;
    else
    {
        i=m/4;
        if(n>=i*2 && t >=i) cout << i*4+i*2+i << endl;
        else if(n<i*2)
        {
            i=n/2;
            if(t >=i)
            {
                cout << i*4+i*2+i << endl;
            }
            else
            {
                i=t;
            cout << i*4+i*2+i << endl;
            }
 
        }
        else if(t < i)
        {
            i=t;
            cout << i*4+i*2+i << endl;
 
        }
    }

 
 
 
    return 0;
}
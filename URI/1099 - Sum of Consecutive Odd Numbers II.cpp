#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];

int main()
{
    int n,m,i,j,q,y,aa,bb,f=0,min=10000010,t,r,s=0,u,max=0;
    double div;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        s=0;
        if(n<=m)
        {
            for(n+=1; n<m; n++)
            {
                if(n%2)
                    s+=n;
            }
        }
        if(m<n)
        {
            for(m+=1; m<n; m++)
            {
                if(m%2)
                    s+=m;
            }
        }
        cout << s << endl;
    }






    return 0;
}

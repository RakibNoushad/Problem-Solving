#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];

int main()
{
    int n=1,m=1,i,j,q,y,aa,bb,f=0,min=10000010,t,r,s=0,u,max=0;
    double div;
    while(n>=0 || m>=0)
    {
        cin >> n >> m;
        s=0;
        if(n<=0 || m<=0) break;
        else
        {
            if(n<=m)
            {
                for(;n<=m;n++)
                {
                    cout << n << " ";
                    s+=n;
                }
            }
            else if(m<n)
            {
                for(;m<=n;m++)
                {
                    cout << m << " ";
                    s+=m;
                }
            }
        }
        cout << "Sum=" << s << endl;
    }






    return 0;
}

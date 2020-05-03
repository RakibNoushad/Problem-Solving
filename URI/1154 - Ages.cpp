#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];

int main()
{
    int n,m,i,j,q,y,aa,bb,f=0,min=10000010,t=0,r,s=1,u,max=0;
    double div;
    while(f>=0)
    {
        cin >> f;
        if(f>=0)
        {
            max+=f;
            t++;
        }

    }
    div= double(max)/double(t);
    cout << fixed << setprecision(2) << div << endl;






    return 0;
}

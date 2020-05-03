#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];

int main()
{
    int n,m,i,j,q,y,aa,bb,f=0,k,min=10000010,t,r,s,u;
    double div;
    char a[100];
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        if(m==0)
            cout << "divisao impossivel" << endl;
        else
        {
            div= double(n)/double(m);
            cout << fixed << setprecision(1) << div << endl;
        }
    }




    return 0;
}

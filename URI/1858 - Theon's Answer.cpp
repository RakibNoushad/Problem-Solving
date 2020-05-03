#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];

int main()
{
    int n=1,m=1,i,j,q,y,aa,bb,f=0,min=10000010,t,r,s=0,u,max=0, al=0, gas=0, dis=0;
    double div,baki;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> n;
        if(n<min)
        {
            m=i;
            min=n;
        }
    }

    cout << m << endl;



    return 0;
}

#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];

int main()
{
    int n=1,m=0,i,j,q,y,aa,bb,f=0,min=10000010,t,r,s=0,u,max=0, al=0, gas=0, dis=0;
    double div,baki=0.0;
    //cin >> n;
    while(n!=2)
    {
        cin >> div;
        if(div>=0 && div<=10)
        {
            m++;
            baki+=div;
            if(m==2)
            {
                cout << "media = " << fixed << setprecision(2) << baki/double(m) << endl;
                m=0;
                s=1;
                baki=0;
                n=2;
            }
        }
        else
        {
            cout << "nota invalida\n";
           // cin >> div;
        }
    }



    return 0;
}

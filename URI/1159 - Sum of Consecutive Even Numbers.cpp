#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
char b[10010];

int main()
{
    int n,m,i,j,q,y,aa,bb,f=1,k,min=10000010,t,r,s,u;
    double div, ek, dui;
    char a[100010];
    while(f)
    {
        cin >> f;
        s=0;
        i=5;
        if(f!=0)
        {
            if(f%2!=0)
            {
                f++;
                while(i--)
                {
                   s+=f;
                   f+=2;
                }
            }
            else
            {
                while(i--)
                {
                    s+=f;
                   f+=2;
                }
            }
        }
        else break;

        cout << s << endl;
    }


    return 0;
}

#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];


int main()
{
    int n,m,i,j;
    char a[10010],b[10010], c[10010];

    cin >>a >> b>> c;

    if(a[0]=='v')
    {
        if(b[0]=='a')
        {
            if(c[0]=='c') cout << "aguia\n";
            else cout << "pomba\n";
        }
        else
        {
            if(c[0]=='o') cout << "homem\n";
            else cout << "vaca\n";

        }
    }

        else
    {
        if(b[0]=='i')
        {
            if(c[2]=='m') cout << "pulga\n";
            else cout << "lagarta\n";
        }
        else
        {
            if(c[0]=='h') cout << "sanguessuga\n";
            else cout << "minhoca\n";
        }

    }


    return 0;
}

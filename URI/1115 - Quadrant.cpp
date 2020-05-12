#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];




int main()
{
    int n,i=1,j=1,u=0,l,f=1,m;
    int a[10010],b[10010];
    long  long int s=0;
    double x,y,z;

    while(i && j)
    {
        cin >> i >> j;
        if(i>0 && j>0) cout << "primeiro\n";
        else if(i>0 && j<0) cout << "quarto\n";
        else if(i<0 && j>0) cout << "segundo\n";
        else if(i<0 && j<0) cout << "terceiro\n";
        else break;


    }

    return 0;
}

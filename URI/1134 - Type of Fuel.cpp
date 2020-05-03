#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];

int main()
{
    int n=1,m=1,i,j,q,y,aa,bb,f=0,min=10000010,t,r,s=0,u,max=0, al=0, gas=0, dis=0;
    double div;
    while(n!=4)
    {
        cin >> n;
        if(n==1) al++;
        else if(n==2) gas++;
        else if(n==3) dis++;

    }
    cout << "MUITO OBRIGADO" << endl << "Alcool: " << al << endl << "Gasolina: " << gas << endl;
    cout << "Diesel: " << dis << endl;

    return 0;
}

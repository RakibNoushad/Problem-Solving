#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];


int main()
{
    int n,m,i,j,q,y,aa=0,bb,f=0,min=10000010,t=1,r,u,max=0,k=0,s=0;
    double ek, dui, tin,kom;
    char a[10010];
    cin >> ek >> dui >> tin;
    if(ek>dui && ek>tin)
    {
        if(ek<(dui+tin))
        {
            cout << "Perimetro = " << fixed << setprecision(1) << ek+dui+tin << endl;
        }
        else
        {
            cout << "Area = " << fixed << setprecision(1) << (ek+dui)*tin*0.5 << endl;
        }
    }

    else if(dui>ek && dui>tin)
    {
        if(dui<(ek+tin))
        {
            cout << "Perimetro = " << fixed << setprecision(1) << ek+dui+tin << endl;
        }
        else
        {
            cout << "Area = " << fixed << setprecision(1) << (ek+dui)*tin*0.5 << endl;
        }
    }

    else
    {
        if(tin<(dui+ek))
        {
            cout << "Perimetro = " << fixed << setprecision(1) << ek+dui+tin << endl;
        }
        else
        {
            cout << "Area = " << fixed << setprecision(1) << (ek+dui)*tin*0.5 << endl;
        }
    }


    return 0;
}

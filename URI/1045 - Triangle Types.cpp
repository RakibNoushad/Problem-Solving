#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];


int main()
{
    int n,m,i,j,q,y,aa=0,bb,f=0,min=10000010,t=1,r,u,max=0,k=0,s=0;
    double ek, dui, tin,kom,chaar,total, one, two, three;
    char a[10010];
    cin >> ek >> dui >> tin;

    if(dui>=ek && dui>=tin)
    {
        if(ek>=tin)
        {
            one = dui;
            two = ek;
            three = tin;
        }
        else
        {
            one= dui;
            two=tin;
            three = ek;
        }

    }
    else if(tin >=ek && tin >=dui)
    {
        if(ek>=dui)
        {
            one=tin;
            two= ek;
            three= dui;
        }
        else
        {
            one=tin;
            two=dui;
            three=ek;
        }
    }
    else
    {
        if(dui>=tin)
        {
            one=ek;
            two=dui;
            three=tin;
        }
        else
        {
            one=ek;
            two=tin;
            three=dui;
        }
    }

    if(one>=(two+three))
        cout << "NAO FORMA TRIANGULO" << endl;
    else if((one*one)==((two*two)+(three*three)))
        cout << "TRIANGULO RETANGULO\n";
    else if((one*one)>((two*two)+(three*three)))
        cout << "TRIANGULO OBTUSANGULO\n";
    else if((one*one)<((two*two)+(three*three)))
        cout << "TRIANGULO ACUTANGULO\n";


    if(one==two && two==three && three==one)
        cout << "TRIANGULO EQUILATERO\n";
    else if(one==two || two==three || one==three)
        cout << "TRIANGULO ISOSCELES\n";



    return 0;
}

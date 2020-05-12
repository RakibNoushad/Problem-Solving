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
    kom= (dui*dui)-4*ek*tin;
    if(ek==0)
    {
        cout << "Impossivel calcular\n";
        //break;
    }
    else if(kom<0)
    {
        cout << "Impossivel calcular\n";
    }
    else
    {
        kom=sqrt(kom);
        cout << "R1 = " << fixed << setprecision(5) << (kom-dui)/(2*ek) << endl;
        cout << "R2 = " << fixed << setprecision(5) << (0.0-kom-dui)/(2*ek) << endl;
    }



    return 0;
}

#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];


int main()
{
    int n,m,i,j,q,y,aa=0,bb,f=0,min=10000010,t=1,r,u,max=0,k=0,s=0;
    double ek, dui, tin,kom,chaar,total;
    char a[10010];
    cin >> t;
    cin.ignore();
    while( t--)
    {

        cin.getline(a,10010);
        n=strlen(a);
        m=n;
        n--;
        for(i=0; i<strlen(a); i++)
        {
            if((a[i]>=65 && a[i]<=90)|| (a[i]>=97 && a[i]<=122))
            {
                b[n]=a[i]+ 3;
                n--;
            }
            else
            {
                b[n]=a[i];
                n--;
            }
        }
        m=m/2;
        for(; m<strlen(a); m++)
        {
                b[m]=b[m]-1;
        }
        for(i=0; i<strlen(a); i++)
        {
            cout << b[i];
        }
        cout << endl;
    }



    return 0;
}

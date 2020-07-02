#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    int n, m, t, j,k=0, s=0,l,g,mx=0,i;
    char a[15];
    cin >> t;
    while(t--)
    {
        for(i=1;i<10;i++)
        {
            cin >> a;
            if(i==1) a[0]=a[1];
            else if(i==2) a[3]=a[4];
            else if(i==3) a[6]=a[7];
            else if(i==4) a[7]=a[8];
            else if(i==5) a[1]=a[2];
            else if(i==6) a[4]=a[5];
            else if(i==7) a[5]=a[4];
            else if(i==8) a[8]=a[7];
            else if(i==9) a[2]=a[1];
            cout << a<< endl;
        }
 
 
 
    }
 
 
    return 0;
}
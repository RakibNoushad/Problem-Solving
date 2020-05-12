#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n,m,i,j,q,y,aa,bb,f=0,s=0,k,min=1000000010,r,t;
    char a[10010],b[10010];;
 
 
    gets(a);
    r=strlen(a);
    for(i=0;i<r;i++)
    {
        if(a[i]=='H' || a[i]=='Q' || a[i]== '9')
        {
            cout << "YES" << endl;
            break;
        }
        else
          f++;
 
    }
    if(f==r)
        cout << "NO" << endl;
 
 
    return 0;
}

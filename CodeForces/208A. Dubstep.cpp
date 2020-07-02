#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];
 
 
 
 
int main()
{
    int n,i=0,j,u=0,l,f=0,min=1200,max=0,firstx, lastn,m, flag=0;
    char a[10010],b[10010];
    double x,y,z;
 
    cin >> a;
    n = strlen(a);
 
    for(i=0;i<n;i++)
    {
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B' && f==1)
        {
            i+=2;
            flag = 1;
        }
        else if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B' && f==0)
        {
            i+=2;
        }
        else if(flag==0)
        {
            cout << a[i];
            f=1;
        }
        else
        {
            cout<<" " << a[i];
            flag =0;
        }
    }
    cout << endl;
 
    return 0;
}
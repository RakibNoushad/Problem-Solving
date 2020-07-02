#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];
 
 
 
int b[200010], a[200010],x[200010];
int main()
{
    int n,i=0,j=2,u=0,l,f=0,min=1200,max=0,firstx, lastn,m, flag=0;
 
    double y,z;
 
    cin >> n;
    cin >> b[0];
    x[0]=0;
    a[0]=b[0];
    max = a[0];
    cout << a[0] << " ";
    for(i=1;i<n;i++)
    {
       cin >> b[i];
       x[i]=max;
       a[i]=x[i]+b[i];
       if(a[i]>max)
        max= a[i];
    }
 
    for(j=1;j<n-1;j++)
    {
        cout << a[j] << " ";
    }
    cout << a[n-1] << endl;
 
 
    return 0;
}
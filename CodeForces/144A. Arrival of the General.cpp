#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];
 
 
 
 
int main()
{
    int n,i=0,j,u=0,l,f=0,min=1200,max=0,firstx, lastn,m;
    int a[10010],b[10010];
    double x,y,z;
 
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> a[i];
        if(a[i]<=min)
        {
            min = a[i];
            lastn = i;
        }
        if(a[i]>max)
        {
            max= a[i];
            firstx = i;
        }
 
    }
 
    if(lastn<firstx)
    {
        m=(n-lastn)+(firstx-1)-1;
    }
    else
    {
        m=(n-lastn)+(firstx-1);
    }
 
    cout << m << endl;
 
    return 0;
}
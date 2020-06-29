#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];
 
 
int main()
{
    int n,i=0,j,u=0,l,f=0;
    char a[10010];
    cin >> a;
    n=strlen(a);
 
    for(i=0;i<n;i++)
    {
        if(a[i]>=65 && a[i]<=90) u++;
        if(u>n/2)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>=97 && a[i]<=122)
            {
                a[i]=a[i]-32;
                cout << a[i];
            }
            else cout << a[i];
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>=65 && a[i]<=90)
            {
                a[i]=a[i]+32;
                cout << a[i];
            }
            else cout << a[i];
        }
    }
    cout << endl;
 
 
 
    return 0;
}
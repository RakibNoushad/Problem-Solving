#include<bits/stdc++.h>
using namespace std;
char c[10010];
 
int main()
{
    int n,m,i,j,q,s=0,k,min=1000000010,r,t,x,y,f=0,max=0;
    char a[10010],b[10010];
    cin >> a;
    n= strlen(a);
    for(i=0; i<n; i++)
    {
 
        if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='Y')
        {
            s++;
            if(s>=max)
                max = s;
            s=0;
        }
        else
        {
            s++;
            if(i==n-1)
        {
            s++;
            if(s>max)
                max = s;
        }
        }
    }
    cout << max << endl;
 
 
 
    return 0;
}
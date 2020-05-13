#include<bits/stdc++.h>
#include<string>
using namespace std;
int b[100010];
 
int main()
{
    int n,m,i,j,q,y,aa,bb,f=0,s=0,k,min=10000010,r,t;
    char a[10010];
 
    //cin.ignore();
    cin  >> a;
    n= strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='a') f++;
    }
    m=f*2;
    m--;
    if(f>n/2) cout << n << endl;
    else
    cout << m << endl;
 
 
 
    return 0;
}
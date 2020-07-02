#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    long long int n,i=0,j=2,s=0,m,t, f=0,k;
    char a[100010], b[100010], c[100010];
    double y,z;
    int check =1;
 
    cin >> t;
    while(t--)
    {
 
        cin >> n;
        cin >> a;
        f=0;
        b[0]='1', c[i]='1';
        for(i=1;i<n;i++)
        {
            if(a[i]=='0') b[i]='0',c[i]='0';
            else if(a[i]=='1' && f==0) b[i]='1', c[i]='0',f=1;
            else if(a[i]=='1' && f==1) b[i]='0', c[i]='1';
            else if(a[i]=='2' &&f==1) b[i]='0', c[i]='2';
            else b[i]='1', c[i]='1';
        }
        for(i=0;i<n;i++)
        {
        cout << b[i];
        }
        cout << endl;
        for(i=0;i<n;i++)
        {
            cout << c[i];
        }
        cout << endl;
    }
 
 
    return 0;
}
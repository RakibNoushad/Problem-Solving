#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];
 
 
 
char str[200010], a[200010],x[200010];
int main()
{
    long long int n,i=0,j=5,s=0,m,t, f=0,k;
    double y,z;
    int check =1;
    long long int bo,bt;
        while(j--)
        {
            cin >> n;
            s+=n;
        }
        if(s%5 || s==0) cout << "-1";
        else
        {
            cout << s/5;
        }
        cout << endl;
    return 0;
}
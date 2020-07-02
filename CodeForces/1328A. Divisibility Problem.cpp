
#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    long long int n,i=0,j=2,s=0,m,t, flag=0;
    int a[110], b[110];
    double y,z;
    int check =1;
 
    cin >> n;
    while(n--)
    {
        cin >> i >> j;
        s=0;
 
        if(i%j==0) cout << "0";
        else
        {
            m= i/j;
            m++;
            s = (m*j)-i;
            cout << s;
        }
 
    cout << endl;
    }
 
 
 
    return 0;
}

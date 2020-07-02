#include<bits/stdc++.h>
#include<string>
using namespace std;


{
    long long int n,i=0,j=2,s=0,m,t, flag=0;
    int a[110], b[110];
    double y,z;
    int check =1;
 
    cin >> n;
    while(n--)
    {
        cin >> m;
        if(360%(180-m)==0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
 
    return 0;
}
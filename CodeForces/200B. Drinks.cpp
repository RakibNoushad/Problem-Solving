#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];
 
 
 
char b[200010], a[200010],x[200010];
int main()
{
    long long int n,i=0,j=2,s=0,m,t, flag=0;
    //char a[110], b[110];
    double y,z;
    int check =1;
 
    cin >> n;
    m=n;
    while(m--)
    {
        cin >> i;
        s+=i;
    }
    y= double(s)/n;
    cout << y << endl;
 
    return 0;
}
#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];




int main()
{
    int n,i=0,j,u=0,l,f=0,k,ra=0;
    char a[100010];
    double x,y,z,sum;

    cin >> n;
    sum=0;
    while(n--)
    {
        cin >> x >> y>> z;
        sum=(x*2)+(y*3)+(z*5);
        sum/=10.0;
        cout << fixed << setprecision(1) << sum << endl;
    }

    return 0;
}

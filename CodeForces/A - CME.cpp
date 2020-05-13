#include<bits/stdc++.h>
using namespace std;
char c[10010];
 
int main()
{
    int n,m,i,j,q,s=0,k,miny=1000000010,r,t,x,y,aa;
    char a[10010],b[10010];
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n<4)
            cout << 4-n << endl;
        else if(n%2==0)
        {
            cout << "0\n";
        }
        else
            cout << "1\n";
 
    }
 
 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
char c[10010];
 
int main()
{
    int n,m,i,j,q,s=0,k,miny=1000000010,r,t,x,y,aa;
    char a[10010],b[10010];
    cin >> a;
    s=8;
    if(a[0]== 'a' || a[0]=='h')
    {
        s-=3;
        if (a[1]== '1' || a[1]== '8')
            s-=2;
 
    }
    else if (a[1]== '1' || a[1]== '8')
        s-=3;
 
    cout << s << endl;
 
 
    return 0;
}
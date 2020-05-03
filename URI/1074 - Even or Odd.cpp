#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];

int main()
{
    int n,m,i,j,q,y,aa,bb,f=0,k,min=10000010,t,r,s,u;
    char a[100];
    cin >> n;
    while(n--)
    {
        cin >> t;
        if(t%2==0 && t>0) cout << "EVEN POSITIVE\n";
        else if(t%2==0 && t<0) cout << "EVEN NEGATIVE\n";
        else if(t%2==1 && t>0) cout << "ODD POSITIVE\n";
        else if(t%2==-1 && t<0) cout << "ODD NEGATIVE\n" ;
        else cout << "NULL\n";
    }


    return 0;
}

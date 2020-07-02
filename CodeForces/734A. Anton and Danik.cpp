#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];
 
 
 
char b[200010], a[200010],x[200010];
int main()
{
    int n,i=0,j=2,u=0,l,fa=0, fd=0,min=1200,max=0,firstx, lastn,m, flag=0;
    //char a[110], b[110];
    double y,z;
 
    cin >> n;
    cin >> a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='A') fa++;
        else fd++;
 
    }
    if(fa>fd) cout << "Anton\n";
    else if(fd>fa) cout << "Danik\n";
    else cout << "Friendship\n";
 
    return 0;
}
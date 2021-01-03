#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back

char a[200010],b[200010],c[200010];
 
int main()
{
    int n, m, t, i, j,k,f=0,mn,mx;
    
    vi v(1000);
 
    cin >> a;
    j=0;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='h' && j==0)
        {
            j++;
        }
        else if(a[i]=='e'&& j==1)
        {
            j++;
        }
        else if(a[i]=='l' && j==2) j++;
        else if(a[i]=='l' && j==3) j++;
        else if(a[i]=='o' && j==4) j++;
    }
    if(j==5) cout << "YES\n";
    else cout << "NO\n";
 
 
    return 0;
}
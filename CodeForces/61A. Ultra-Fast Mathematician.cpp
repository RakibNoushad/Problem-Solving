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
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, m, t, i, j,k,f=0,mn=0,mx,sum=0;
    
    cin >> a >> b;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if((a[i]=='1' && b[i]=='0') || (a[i]=='0' && b[i]=='1')) cout << "1";
        else cout << "0";
    }
    cout << endl;
 
return 0;
}

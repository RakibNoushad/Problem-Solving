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
    
    cin >> a;
    f=97;
    n= strlen(a);
    for(i=0;i<n;i++)
    {
            if(f<=a[i]) m= abs(a[i]-f);   
            else m = (123-f) + (a[i]-97);
            if(f>=a[i]) k = abs(f- a[i]); 
            else k= (f-96)+(122-a[i]);
            f= a[i];
            mn = min(k,m);
            sum+=mn;
    }
    cout << sum << endl;
 
    return 0;
}

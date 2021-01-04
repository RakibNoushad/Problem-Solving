#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n=1, t, i, j,k,f=0,mn=0,mx,l,sun=0,m=1;
    long long int sum =0;
    int a, b,c,d;
    int ekmn, ekmx, almn, almx;
    cin >> t;
    while(t--)
    {
        cin >> n >>a >> b >> c >> d;
        ekmn = a-b;
        ekmx = a+b;
        almn = ekmn*n;
        almx = ekmx*n;
        mn = c-d;
        mx = c+d;
        if(almx>=mn && almn <=mx) cout << "Yes\n";
        else cout << "No\n";
 
    }
    
return 0;
}
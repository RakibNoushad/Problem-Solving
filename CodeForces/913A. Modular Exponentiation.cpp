#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
 
int a[200010],b[200010],c[200010];
 
int main()
{
    int n, m, t, i, j,k,f=0,mn,mx;
    
    vi v(1000);
 
    cin >> n;
    cin >> m;
    if(n>30) cout << m << endl;
    else{
        LLI nr= (int)pow(2,n)+0.5;
        cout << m%nr << endl;
    }
 
 
    return 0;
}
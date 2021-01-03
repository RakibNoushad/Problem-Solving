#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))

char a[200010],b[200010],c[200010];
 
int main()
{
    int n, m, t, i, j,k,f=0;
    
    vector<long long> v(1500000);
 
    v[0]=1;
    for(i=1;i<1500000;i++)
    {
        v[i]=v[i-1]+i;
    }
 
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int pos;
        pos = upper_bound(v.begin(), v.end(), k) - v.begin() - 1;
        int fb =pos;
        int sb = k- v[fb];
        //cout << pos << endl;
 
        for(i=0;i<n;i++)
        {
            a[i]='a';
        }
        a[i-2-pos]='b';
        a[i-1-sb] = 'b';
        for(i=0;i<n;i++) cout << a[i];
            cout << endl;
 
    }
    
 
 
    return 0;
}
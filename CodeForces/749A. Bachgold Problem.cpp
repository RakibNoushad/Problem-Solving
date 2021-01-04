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
    
    cin >> n;
    if(n%2==0)
    {
        m=n/2;
        cout << m << endl;
        m--;
        while(m--)
        {
            cout << "2 ";
        }
        cout << "2" <<endl;
    }
    else if(n==3) cout << "1" << endl << "3" << endl;
    else
    {
        m=(n-3)/2;
        cout << m+1 << endl;
        while(m--) cout << "2 ";
        cout << "3" << endl;
    }   
 
 
    return 0;
}
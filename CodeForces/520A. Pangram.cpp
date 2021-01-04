#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5

char a[200010],b[200010]={0};
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n=1, t, i, j,k,f=0,mn=0,mx,l,m;
    LLI sum =0;
    
    cin >> n;
    cin >> a;
    for(i=0;i<n;i++)
    {
        if(a[i]>=65 && a[i]<=90) j=a[i]-65;
        else if(a[i]>=97 && a[i]<=122) j=a[i]-97;
        b[j] =1;
    }
    for(i=0;i<26;i++)
    {
        if(b[i]==0) f=1;
    }
    if(f>0) cout << "NO" << endl;
    else cout << "YES" << endl;
 
return 0;
}
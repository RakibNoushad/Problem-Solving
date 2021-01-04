#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5

long long int a[200010],b[200010]={0};
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    long long int n=1, t, i, j,k,f=0,mn=0,mx,l,sun=0,m=1;
    long long int sum =0;
    long long int peak=0,left,temp=0,right;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        peak=0,left=0,temp=0;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        b[0]=0,b[n-1]=0;
        for(i=1;i<n-1;i++)
        {
            if((a[i]> a[i-1]) && (a[i]> a[i+1])) b[i]=1;
            else b[i]=0;
        }
        int length = n-k+1;
        int final[length];
        final[0]=0;
        for(i=0;i<k-1;i++)
        {
            final[0]+=b[i];
        }
        left = 1;
        peak = final[0];
 
        for(i=1;i<=n-k;i++)
        {
            final[i] = final[i-1]-b[i]+b[i+k-2];
            if(final[i]>peak)
            {
                peak = final[i];
                left=i+1;
            }
        }
        
 
        peak++;
        cout << peak << " " << left << endl;
        peak =0;
 
    }
    
    
 
 
return 0;
}
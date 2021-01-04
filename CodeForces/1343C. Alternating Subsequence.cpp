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
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i, j,k,f=0,mn=0,mx,l,d,sun=0;
    long long int sum =0;
    
    vi v(150000);
 
    cin >> t;
    
    while(t--)
    {
        int p=0,m=0;
        j=0,sum=0;
 
 
        cin >> n;
        cin >> a[0];
 
        f=a[0];
        b[0]=f;
        if(f>=0) p=1;
        else m=1;
 
        for(i=1;i<n;i++)
        {
            cin >> a[i];
            if(p==1 && a[i]>0 && a[i]>f)
            {
                f=a[i];
            }
            else if(m==1 && a[i]<0 && a[i]>f)
            {
                f=a[i];
            }
            else if(p==1 && a[i]<0)
            {
                
                b[j]=f;
                j++;
                f=a[i];
                p=0;
                m=1;
            }
            else if(m==1 && a[i]>0)
            {
               
                b[j]=f;
                j++;
                f=a[i];
                m=0;
                p=1;      
            }
        }
        b[j]=f;
        for(;j>=0;j--)
        {
            sum+=b[j];
        }

        cout << sum << endl;

    }
 
return 0;
}
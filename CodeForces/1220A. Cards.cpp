#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5
#define ub(a,b) upper_bound(a.begin(),a.end(),b)-a.begin()
#define lb(a,b) lower_bound(a.begin(),a.end(),b)-a.begin()
#define srt(a) sort(a.begin(),a.end())
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n=0, t, i, j,k,f=0,mx,l,m,dif=0,pos,o=0,e=0, z=0,r=0;
    LLI sum =0;
    
    cin >> t;
    cin >> x;
    j=0;
    for(i=0;i<t;i++)
    {
        if(x[i]=='o') o++;
        else if(x[i]=='n') n++;
        else if(x[i]=='e') e++;
        else if(x[i]=='z') z++;
        else if(x[i]=='r') r++;
    }
    for(i=0;i<t;i++)
    {
        if(o>0 && n>0 && e>0)
        {
            a[j]=1;
            j++;
            o--;
            n--;
            e--;
        }
        else  if(z>0 && e>0 && r>0 && o>0)
        {
            a[j]=0;
            j++;
            z--;
            e--;
            r--;
            o--;
        }
        
    }
    for(i=0;i<j-1;i++)
    {
        cout << a[i] << " ";
    }
    cout << a[j-1] << endl;
 
return 0;
}
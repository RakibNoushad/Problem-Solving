#include<bits/stdc++.h>
#include<string>
using namespace std;
 
 
char str[200010], a[200010],x[200010];
int main()
{
    long long int n,i=0,j=2,s=0,m,t, f=0,k;
    double y,z;
    int check =1;
    long long int bo,bt;
        cin >> n >> k;
       if(k>n) cout << "-1";
       else
       {
           m= (n+1)/2;
           while(m%k)
           {
               i= m/k;
               i++;
               m= i*k;
           }
           cout << m;
       }
       cout << endl;
 
 
    return 0;
}
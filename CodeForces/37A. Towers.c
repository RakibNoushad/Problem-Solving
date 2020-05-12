#include <bits/stdc++.h>
using namespace std;
 
//long long int jog(long long int n);
//long long int ;
int b[1100];
 
int main()
{
    int a[11000];
    int n,m,k,i,j,max=0,count=0;
    // long long int min=10000000,sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
       j=a[i];
       b[j]++;
       //b[a[i]]++;
    }
    for(i=1;i<1100;i++)
    {
    //   printf("%d\n", b[i]);
 
       if(b[i]>=max)
            max=b[i];
        if(b[i]>=1)
            count++;
    }
 
   printf("%d %d\n", max, count);
 
 
 
 
    return 0;
}

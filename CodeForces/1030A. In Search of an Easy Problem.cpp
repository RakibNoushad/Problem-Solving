#include <bits/stdc++.h>
using namespace std;
 
//long long int jog(long long int n);
//long long int ;
 
int main()
{
    int f[1000], g[10000];
    int n,m,k,i,j=0;
    // long long int min=10000000,sum=0;
 
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &f[i]);
        if(f[i]==1)
            j++;
    }
    if(j>0)
        printf("HARD\n");
    else
        printf("EASY\n");
 
 
 
    // printf("%d\n", sum);
 
    return 0;
}

#include<stdio.h>
#include<string.h>
 
int main()
{
    int m,n,i,j=0,a[1100],c[1100],count=0;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d", &c[i]);
    }
    for(i=0;i<n;i++)
    {
            if(c[j]>=a[i])
            {
               count++;
               j++;
            }
 
 
 
    }
    printf("%d\n", count);
 
 
 
    return 0;
}

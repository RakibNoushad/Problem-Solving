#include<stdio.h>
#include<string.h>
 
int main()
{
    //int a[110];
    int n,m,k,l,r,q,s,i,j, b,c,count=0;
 
 
    scanf("%d", &n);
 
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
           if(i%j==0)
           {
               if(i*j>n && i/j<n)
                {
                    printf("%d %d\n", i, j);
                i=n+1;
                j=n+1;
                }
           }
           else
           count++;
       }
    }
    if(count==0)
    {
        printf("-1\n");
    }
 
 
 
 
    return 0;
}

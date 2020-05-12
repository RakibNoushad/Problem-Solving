#include<stdio.h>
#include<string.h>
 
int main()
{
    int a[100010],b,c,d,n,i,h=0,count=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }
    if(a[1]!=0)
        {
            printf("1\n");
        }
    else
    {
    for(i=2;i<=n;i++)
    {
 
        if(a[i]<=h+1 && a[i]>=0)
            count++;
        else
        {
            printf("%d\n", i);
            break;
        }
 
            if(a[i]>h)
            h=a[i];
            //printf("%d",h);
 
    }
    if(count==n-1)
        printf("-1");
    }
 
 
 
 
 
    return 0;
}

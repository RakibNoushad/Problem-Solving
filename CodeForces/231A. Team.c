#include<stdio.h>
#include<string.h>
 
int main()
{
    //char a[300];
    int i,j,k,n,count=0,a,b,c;
 
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d", &a,&b,&c);
        if(a+b+c>1)
            count++;
    }
    printf("%d\n", count);
 
    return 0;
}

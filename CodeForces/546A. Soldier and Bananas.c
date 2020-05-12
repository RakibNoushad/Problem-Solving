#include<stdio.h>
#include<string.h>
 
int main()
{
    int m,w,n,k,i,j=0,a[110000],c[1100],count=0;
    scanf("%d %d %d", &k,&n,&w);
    for(;w>0;w--)
    {
        count=k*w+count;
    }
    count=count-n;
    if(count<0)
        count=0;
    printf("%d\n", count);
 
 
 
    return 0;
}

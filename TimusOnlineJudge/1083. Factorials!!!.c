#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
    char a[20];
    int n,i,j,k,sum=1;

    scanf("%d %s",&n, &a);
    j=strlen(a);
    for(;n>0;n-=j)
    {
        sum=sum*n;
    }
    printf("%d\n",sum);


    return 0;
}

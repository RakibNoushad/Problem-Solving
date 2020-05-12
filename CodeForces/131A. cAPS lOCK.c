#include<stdio.h>
#include<string.h>
 
int main()
{
    char a[300];
    int i,j,k,n,count=0;
    scanf("%s", a);
    n=strlen(a);
    for(i=1;i<n;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            count++;
    }
    if (count==n-1 && a[0]>= 'A' && a[0]<='Z')
    {
        for(i=0;i<n;i++)
        {
            a[i]=a[i]+32;
            printf("%c", a[i]);
        }
    }
 
    else if(count==n-1)
    {
        a[0]=a[0]-32;
        printf("%c", a[0]);
        for(i=1;i<n;i++)
        {
            a[i]=a[i]+32;
            printf("%c", a[i]);
        }
    }
 
    else
        printf("%s", a);
 
 
 
    printf("\n");
    return 0;
}

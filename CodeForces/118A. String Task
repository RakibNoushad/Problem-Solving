#include<stdio.h>
#include<string.h>
 
int main()
{
    char a[300];
    int i,j,k,n,count=0;
    scanf("%s", a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>'a' && a[i]<='z' && a[i]!='e' && a[i]!='o' && a[i]!='i' && a[i]!='u' && a[i]!='y')
            printf(".%c", a[i]);
        else if(a[i]>'A' && a[i]<='Z' && a[i]!='E' && a[i]!='O' && a[i]!='I' && a[i]!='U' && a[i]!='Y')
        {
            a[i]=a[i]+32;
            printf(".%c", a[i]);
        }
 
 
 
    }
 
    printf("\n");
 
    return 0;
}

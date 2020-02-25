#include<stdio.h>
#include<string.h>
 
int main()
{
    char a[200],b[200];
    int i,j,k,l,al,bl,count=0;
    gets(a);
    gets(b);
    al=strlen(a);
    for(i=0; i<al; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            a[i]=a[i]+32;
        if(b[i]>='A' && b[i]<='Z')
            b[i]=b[i]+32;
        if(a[i]<b[i])
        {
            printf("-1\n");
            break;
        }
        else if (a[i]>b[i])
        {
 
            printf("1\n");
            break;
        }
        else
            count++;
 
            if(count==al)
                printf("0\n");
    }
 
 
 
    return 0;
}

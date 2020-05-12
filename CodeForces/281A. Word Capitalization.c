#include<stdio.h>
#include<string.h>
 
int main()
{
    char a[1150];
    int i,j,k,n;
    scanf("%s", a);
    n=strlen(a);
    if(a[0]>= 'a' && a[0]<= 'z')
        {
            a[0]=a[0]-32;
            printf("%c", a[0]);
        }
 
 
        else
            printf("%c", a[0]);
 
        for(i=1;i<n;i++)
        {
 
            printf("%c", a[i]);
 
        }
 
        printf("\n");
 
 
 
 
    return 0;
}

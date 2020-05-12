#include<stdio.h>
#include<string.h>
 
int main()
{
   // int a[100000];
    int n,m,k,l,r,q,s,i,j,a, b,c,d,count=0,min=100000;
 
 
    scanf("%d %d", &a, &b);
    //n=a*3;
     //   m=b*2;
 
    for(i=1;i<=100;i++)
    {
        a=a*3;
        b=b*2;
        if(a>b)
        {
            count++;
            printf("%d\n", count);
            break;
        }
        else
            count++;
    }
 
 
 
    return 0;
}

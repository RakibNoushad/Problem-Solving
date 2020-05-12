#include<stdio.h>
#include<string.h>
 
int main()
{
   // int a[100000];
    int n,m,k,l,r,q,s,i,j,a, b,c,d,count=0,min=100000;
 
 
    scanf("%d %d %d %d", &n, &m, &a, &b);
    c=n/m;
    k=b*c;
    d=(n%m)*a;
    if(k+d<=k+b && k+d<=a*n)
        printf("%d\n", k+d);
    else if(a*n<=k+b)
        printf("%d\n", a*n);
    else
        printf("%d\n", k+b);
 
 
    return 0;
}

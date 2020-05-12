#include<stdio.h>
#include<string.h>
 
int main()
{
    int m,w,n,k,i,j=0,a,b,c,d,e,count=0;
    scanf("%d", &n);
    a=n/100;
    m=n%100;
    b=m/20;
    c=(m%20)/10;
    d=((m%20)%10)/5;
    e=((m%20)%10)%5;
 
    printf("%d\n", a+b+c+d+e);
 
 
 
 
 
    return 0;
}

#include<stdio.h>
#include<string.h>
 
int main()
{
    int a,b,c,d,e,f,g,i,t,n;
    scanf("%d", &n);
    for(i=n+1;i<=9900;i++)
    {
    a=i/1000;
    b=i%1000;
    c=b/100;
    d=b%100;
    e=d/10;
    f=d%10;
    if(a!=c && c!=e && a!=e && a!=f && c!=f && e!=f)
    {
            printf("%d%d%d%d\n", a,c,e,f);
            break;
    }
      /*else
        break;*/
    }
    return 0;
}

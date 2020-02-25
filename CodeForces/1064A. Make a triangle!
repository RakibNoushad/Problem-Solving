#include<stdio.h>
#include<string.h>
 
int main()
{
    int a,b,c,s,t,f=0;
    scanf("%d %d %d", &a, &b, &c);
 
    if (a>=b && a>=c && a>=b+c)
    {
        s=b+c-1;
        printf("%d\n", a-s);
    }
    else if (b>=a && b>=c && b>=a+c)
    {
        s=a+c-1;
        printf("%d\n", b-s);
    }
    else if (c>=a && c>=b && c>=b+a)
    {
        s=a+b-1;
        printf("%d\n", c-s);
    }
    else
        printf("0\n");
 
    return 0;
}

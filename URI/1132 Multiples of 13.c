#include<stdio.h>

int main()
{
    int a,b,s=0;
    scanf("%d %d", &a,&b);
    if(a<b)
    {for(;a<=b;a++)
    {
        if(a%13!=0)
            s=s+a;
    }
    }
    else
    {
        for(;b<=a;b++)
    {
        if(b%13!=0)
            s=s+b;
    }
    }
    printf("%d\n",s);

    return 0;
}

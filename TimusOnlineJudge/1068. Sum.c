#include<stdio.h>
#include<math.h>


int main()
{
    int n, a,b,k;
    long long s=0;
    scanf("%d", &n);
    if(n>=1)
    {
        for(;n>=1;n--)
        {
            s+=n;
        }
    }
    else
    {
        for(;n<=1;n++)
        {
            s+=n;
        }
    }
    printf("%lld\n",s);



    return 0;
}

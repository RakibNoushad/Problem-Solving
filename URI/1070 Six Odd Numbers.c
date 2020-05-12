
#include <stdio.h>

int main()
{
    int a,i;
    scanf("%d", &a);
    i=a+11;
    for(;a<=i;a++)
    {
        if(a%2!=0)
            printf("%d\n",a);
    }
    return 0;
}

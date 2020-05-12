#include <stdio.h>

int main()
{
    int a,i;
    scanf("%d %d", &a,&i);
    if(a>i)
    {
        if(a%i==0)
            printf("Sao Multiplos\n");

        else
            printf("Nao sao Multiplos\n");
    }
    else
    {
        if(i%a==0)
            printf("Sao Multiplos\n");

        else
            printf("Nao sao Multiplos\n");
    }
    return 0;
}

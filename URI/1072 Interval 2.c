#include<stdio.h>

int main()
{
    int m,n,a,i,j,k;
    j=0,k=0;
    scanf("%d", &n);
    for(i=1; i<=n;i++)
    {
        scanf("%d", &a);
        if(a>=10&& a<=20)
            j++;
        else
            k++;
    }
    printf("%d in\n%d out\n", j,k);

    return 0;
}

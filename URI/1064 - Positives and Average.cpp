#include <stdio.h>

int main()
{
    int n=6,i=0,j;
    char a[10010],b[10010], c[10010];
    double value,s=0;

    while(n--)
    {
        scanf("%lf", &value);
        if(value>=0.0)
        {
            i++;
            s+=value;
        }
    }
    printf("%d valores positivos\n",i);
    printf("%.1lf\n", s/i);



    return 0;
}

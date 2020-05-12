#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
//int max(int m,int n);
 
 
int main()
{
    int o,t,i,j,n,m,s=0,x,y,xy,yx;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d", &x,&y,&xy,&yx);
        scanf("%d",&o);
        printf("Case %d:\n",i);
        for(j=1;j<=o;j++)
        {
            scanf("%d %d", &m, &n);
            if(m>x && m<xy && n>y && n<yx)
                printf("Yes\n");
            else
                printf("No\n");
        }
 
 
    }
 
    return 0;
}

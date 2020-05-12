#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//int max(int m,int n);


int main()
{
    long long int o,t,i,j,n,m,s=0,x,y,xy,yx,R=0,cosvalue,r;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld", &r);
        if(r%2==0)
        {
            //printf("Case %lld: %lld 2\n", i,r/2);
            s=r/2;
            if(s%2!=0)
            {
                printf("Case %lld: %lld 2\n", i,r/2);
            }
            else
            {
                for(j=4; j<r; j+=2)
                {
                    if(r%j==0)
                    {
                        s=r/j;
                        if(s%2!=0)
                        {
                            printf("Case %lld: %lld %lld\n", i,s,j);
                            break;
                        }
                    }
                    if(r-2==j)
                    {
                       printf("Case %lld: Impossible\n", i);
                       break;
                    }

                }

            }
        }
        else
            printf("Case %lld: Impossible\n", i);


    }

    return 0;
}

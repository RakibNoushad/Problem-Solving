#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//int max(int m,int n);


int main()
{
    long long int t,a,b,k,i,j,to,o;
    int n,m;
    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d",&n,&m);
        to=n*m;
        if(n<2 || m<2)
        {
            printf("Case %lld: %lld\n",i+1, to);
        }
        else if(n==2 && m==2)
        {
            printf("Case %lld: %lld\n",i+1, to);
        }
        else if(n==2 || m==2)
        {
            if(n!=2)
                o=n;
            else
                o=m;
            //printf("%lld",o);
            if(to<=8)
                printf("Case %lld: 4\n",i+1);
            else if(o%4==1)
            {
                printf("Case %lld: %lld\n",i+1, o+1);
            }
            else if(o%4==0)
            {
                printf("Case %lld: %lld\n",i+1, o);
            }
            else
            {
                printf("Case %lld: %lld\n",i+1, ((o/4)+1)*4);
            }
        }
        /*else if(to<9)
        {
            j=to/2;
           if(j%2==1)
           {
               printf("Case %lld: %lld\n",i+1, to/2+1);
           }
        }*/
        else if(to%2==0)
        {
            printf("Case %lld: %lld\n",i+1, to/2);
        }
        else
        {
            to++;
            printf("Case %lld: %lld\n",i+1, to/2);
        }
    }



    return 0;
}

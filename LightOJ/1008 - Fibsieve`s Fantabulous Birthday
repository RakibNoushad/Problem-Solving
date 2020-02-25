#include<stdio.h>
#include<math.h>


int main()
{
    long long int s,base,dif,bass,x,y;
    int t, i,j,k;
    scanf("%d", &t);
    for(k=0; k<t; k++)
    {
        scanf("%lld", &s);
        base=sqrt(s);
        //even base
        if(base%2==0)
        {
            x=base;
            y=1;
            dif=s-(base*base);
            // printf("dif=%lld",dif);
            bass=base+1;
            //printf("bass=%lld",bass);
            //sqrt even
            if(dif==0)
            {
                printf("Case %d: %lld %lld\n", k+1, x, y);
            }
            //sqrt next line even
            else
            {

                if(bass>=dif)
                {
                    x++;
                    for(i=1,j=0; i<dif; i++)
                    {
                        j++;
                    }
                    y+=j;
                    printf("Case %d: %lld %lld\n", k+1, x, y);
                }
                //sqrt new file even
                else
                {
                    y=y+base;
                    for(i=1,j=0; i<dif-bass; i++)
                    {
                        j++;
                    }
                    x-=j;
                    printf("Case %d: %lld %lld\n", k+1, x, y);
                }
            }

        }
        //odd base
        else
        {
            x=1;
            y=base;
            dif=s-(base*base);
            bass=base+1;
            //odd sqrt
            if(dif==0)
            {
                printf("Case %d: %lld %lld\n", k+1, x, y);
            }
            //sqrt next file odd
            else
            {

                if(dif<=bass)
                {
                    y++;
                    for(i=1,j=0; i<dif; i++)
                    {
                        j++;
                    }
                    x+=j;
                    printf("Case %d: %lld %lld\n", k+1, x, y);
                }
                //sqrt next line odd
                else
                {
                    x=x+base;
                    for(i=1,j=0; i<dif-bass; i++)
                    {
                        j++;
                    }
                    y-=j;
                    printf("Case %d: %lld %lld\n", k+1, x, y);
                }
            }
        }
    }




    return 0;
}

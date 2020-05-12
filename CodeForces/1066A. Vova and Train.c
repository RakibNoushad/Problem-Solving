#include<stdio.h>
 
int main()
{
    long long int t,L,v,l,r,s,u;
    int i,j,k;
    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld %lld %lld %lld", &L, &v, &l,&r);
        s=(L/v);
 
 
        if(l%v==0)
        {
            u=(r/v)-(l/v)+1;
        }
        else
            u=(r/v)-(l/v);
        printf("%d\n", s-u);
 
    }

    return 0;
}

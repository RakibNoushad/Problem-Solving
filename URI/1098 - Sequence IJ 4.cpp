#include <stdio.h>

int main()
{

    int a,c=0,b;
    double i=0.0,j,add;
    add = 0.2;

        for(b=1; b<=3; b++)
            printf("I=%d J=%d\n",c,b);
        //add+=0.2;
        //i+=add;
        c=1;


    for(a=1; a<5; a++ )
    {
        for(j=1; j<=3; j++)
            printf("I=%.1lf J=%.1lf\n",i+add,j+add);
        add+=0.2;
        //i+=add;


    }
    for(b=2; b<=4; b++)
            printf("I=%d J=%d\n",c,b);

            //1 sesh
        c=2;
        add+=.2;

    for(a=1; a<5; a++ )
    {
        for(j=1; j<=3; j++)
            printf("I=%.1lf J=%.1lf\n",i+add,j+add);
        add+=0.2;
        //i+=add;


    }
    for(b=3; b<=5; b++)
            printf("I=%d J=%d\n",c,b);
    return 0;
}

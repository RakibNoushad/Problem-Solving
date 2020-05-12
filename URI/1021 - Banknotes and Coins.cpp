#include <stdio.h>
#include<math.h>

int main()
{
    int i,j,q,y,aa,bb,f=0,min=10000010,t,r,s=0,u,max=0;
    double div,baki,n;
    scanf("%lf", &div);
    printf("NOTAS:\n");

    n = div*100;
    //n= (int) m;
    //printf("%lf eita n",n);
    //cout << baki << "eita \n";

    r= n/10000;
    printf("%d nota(s) de R$ 100.00\n",r);
    n=n-(r*10000);

    r= n/5000;
    printf("%d nota(s) de R$ 50.00\n",r);
    n=n-(r*5000);

    r= n/2000;
    printf("%d nota(s) de R$ 20.00\n",r);
    n=n-(r*2000);

    r= n/1000;
    printf("%d nota(s) de R$ 10.00\n",r);
    n=n-(r*1000);

    r= n/500;
    printf("%d nota(s) de R$ 5.00\n",r);
    n=n-(r*500);

    r= n/200;
    printf("%d nota(s) de R$ 2.00\n",r);
    n=n-(r*200);

    printf("MOEDAS:\n");

    r= n/100;
    printf("%d moeda(s) de R$ 1.00\n",r);
    n=n-(r*100);

    r= n/50;
    printf("%d moeda(s) de R$ 0.50\n",r);
    n=n-(r*50);

    r= n/25;
    printf("%d moeda(s) de R$ 0.25\n",r);
    n=n-(r*25);

    r= n/10;
    printf("%d moeda(s) de R$ 0.10\n",r);
    n=n-(r*10);

    r= n/5;
    printf("%d moeda(s) de R$ 0.05\n",r);
    n=n-(r*5);


    //r= n/1;
    printf("%.0lf moeda(s) de R$ 0.01\n",n);



    return 0;
}


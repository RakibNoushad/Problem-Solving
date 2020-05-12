#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    double x1,y1,z,x2,y2;
    scanf("%lf %lf %lf %lf", &x1, &y1,&x2,&y2);
    z=sqrt(((x2-x1)*(x2-x1))+ ((y2-y1)*(y2-y1)));

    printf("%.4lf\n", z);
    return 0;
}

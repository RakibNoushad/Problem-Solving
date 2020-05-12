#include <stdio.h>

int main() {

    double a,c,b,pi=3.14159;
    scanf("%lf %lf %lf", &a,&b,&c);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", (1.0/2)*a*c, pi*c*c, (1.0/2)*c*(a+b), b*b, a*b);
    return 0;
}

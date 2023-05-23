#include <stdio.h>

int main(){

    double luke, L, velocidade1, velocidade2;
    scanf("%lf %lf %lf %lf", &luke, &L, &velocidade1, &velocidade2);

    double x,y;

    double tempo;
    

    tempo =  (L - luke) / (velocidade1+velocidade2);

    printf("%.20f\n", tempo);

    return 0;
}
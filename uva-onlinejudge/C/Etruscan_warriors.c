#include <stdio.h>
#include <math.h>


int main(){
   int testes;
   scanf("%d",&testes);
 
   
   
    int i;
    for(i = 0; i < testes; i++){
        double guerreiros;
        scanf("%lf",&guerreiros);
        int resultado = (-1 + sqrt(1 +(8 * guerreiros)))/2;
        
        printf("%d\n",resultado);

        
   }
    return 0;

    /*11614 Uva Online Judge - Etruscan Warriors never play chess */
}

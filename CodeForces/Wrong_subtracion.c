#include <stdio.h>

int main(){

    int numero, vezes;
    int i;
    
    scanf("%d %d", &numero, &vezes);

    for(i = 0; i < vezes; i++){
        if(numero%10 != 0){
            numero = numero - 1;
        }
        else if(numero%10 == 0){
            numero = numero / 10;
        }
    }
    printf("%d\n",numero);

    return 0;

    /*QUESTÂO CodeForces - A. WRONG SUBTRACION em linguagem C :*/

}

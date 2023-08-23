#include <stdio.h>

int main(){
    
    int numero = 1;
    int i;
    int numero_maior = 0;

    for(i = 0; numero != 0; i++){
        scanf("%d", &numero);
        if(numero > numero_maior){
            numero_maior = numero;
        }
    }
    printf("%d\n", numero_maior);

    return 0;

}

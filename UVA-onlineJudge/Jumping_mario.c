#include <stdio.h>

int main(){
    int testes;
    int i,j,h;
    scanf("%d",&testes);
    int salto_alto = 0;
    int salto_baixo = 0;

    for(i = 1; i <= testes; i++){
        int paredes;
        int altura_passada;
        int altura_atual;
        scanf("%d", &paredes);
        scanf("%d", &altura_passada);
        salto_alto = 0;
        salto_baixo = 0;

        for(j = 1; j < paredes; j++){
            scanf("%d",&altura_atual);
            
            if(altura_passada > altura_atual){
                salto_baixo++;
            }
            else if(altura_passada == altura_atual){
            
            }
            else if(altura_passada < altura_atual){
                salto_alto++;
            }
            altura_passada = altura_atual;

            
        }
        printf("Case %d: %d %d\n",i,salto_alto,salto_baixo);

    }

    return 0;

}

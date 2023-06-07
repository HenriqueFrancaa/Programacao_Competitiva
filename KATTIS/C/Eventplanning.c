#include <stdio.h>
#include <limits.h>

int main(){
    int participantes, orcamentos, hoteis, semanas;
    int preco_por_pessoa, camas, i, j;
    int menor_preco = INT_MAX;
    int custo;
    
    scanf("%d %d %d %d",&participantes, &orcamentos, &hoteis, &semanas);

    for(i = 0; i < hoteis; i++){
        scanf("%d", &preco_por_pessoa);
        for(j = 0; j < semanas; j++){
            scanf("%d",&camas);
            if(camas >= participantes){
                custo = participantes * preco_por_pessoa;
                if(custo <= orcamentos && custo < menor_preco){
                    menor_preco = custo;
                }
            }
        }
    }
    if(menor_preco == INT_MAX){
        printf("stay home\n");
    }
    else{
        printf("%d\n",menor_preco);
    }
    return 0;


}

/*Questao do event planning em C :*/
/*SITE: KATTIS*/
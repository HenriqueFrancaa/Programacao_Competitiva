#include <stdio.h>

int main(){

	int amigos,garrafas,ml,limao,fatias_limao,sal,nl, np;
	int resultado;

	scanf("%d %d %d %d %d %d %d %d",&amigos, &garrafas, &ml, &limao, &fatias_limao, &sal, &nl, &np);

	int bebida_total = garrafas * ml;

	int drinks_possiveis = bebida_total/nl;

	int limao_total = limao * fatias_limao;

	int sal_usado = sal / np;

	if(drinks_possiveis <= limao_total && drinks_possiveis <= sal_usado){
		resultado = drinks_possiveis/ amigos;
	}
	else if(limao_total <= drinks_possiveis && limao_total <= sal_usado){
		resultado = limao_total/ amigos;
	}
	else if(sal_usado <= drinks_possiveis && sal_usado <= limao_total){
		resultado = sal_usado / amigos;
	}

	printf("%d", resultado);

	return 0;

/*Questão do CodeForces - Soft Drinking em linguagem C:*/
}



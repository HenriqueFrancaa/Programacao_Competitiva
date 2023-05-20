#include <stdio.h>

int main(){

	int numero, fatorial;

	scanf("%d", &numero);

	for(fatorial = 1; numero > 1; numero = numero - 1){
		
		fatorial = numero * fatorial;
	}

	printf("%d",fatorial);

	return 0;
}

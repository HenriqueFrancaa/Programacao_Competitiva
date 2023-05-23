#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){

	int i;
	int contador = 0;
	long long size = 80;
	char numeros[size + 2];

	gets(numeros);
	

	for(i = 0; i < strlen(numeros) - 1; i++){

		if(numeros[i] == '4' || numeros[i] == '7'){
			contador++;
		}

	}

	printf("%d",contador);

	getch();
	return 0;

}



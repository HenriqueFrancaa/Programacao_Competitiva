#include <stdio.h>
#include <string.h>

int main(){

	int i;
	int contador = 0;
	long long size = 1000000000000000000;
	char numeros[size + 2];

	fgets(numeros,size + 2, stdin);
	
	for(i = 0; i < strlen(numeros); i++){

		if(numeros[i] == '4' || numeros[i] == '7'){
			contador++;
		}

	}

    if(contador == 7 || contador == 4){
        printf("YES");
    }
    else{
        printf("NO");
    }
	

	return 0;

}



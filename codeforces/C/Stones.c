#include <stdio.h>
#include <string.h>

int main(){

    int letras,i;
    int retirados = 0;
    scanf("%d",&letras);

    char cores[letras + 2];
    fgets(cores,letras + 2, stdin);
    fgets(cores,letras + 2, stdin);

    for(i=0; i<letras; i++){

        if(cores[i] == cores[i+1] ){
            retirados++;
        }
    }

    printf("%d\n",retirados);

    return 0;
/*QUESTÂO CodeForces - Stones em linguagem C :*/
}
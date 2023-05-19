#include <stdio.h>

int main(){

    int pesol, pesob;
    int anos = 0;

    scanf("%d %d", &pesol, &pesob);

    while(pesol <= pesob){
        pesol = pesol * 3;
        pesob = pesob * 2;
        anos++;
    }
    printf("%d\n", anos);

    return 0;

    /*Questão do CodeForces - A. Bear and Big Brother em linguagem C : */
}

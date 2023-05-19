#include <stdio.h>
#include <string.h>

int main(){
    int questoes, i;
    int pontos = 0;

    scanf("%d",&questoes);
    char gabarito[questoes + 5];
    char aluno[questoes + 5];

    fgets(gabarito,questoes + 5,stdin);
    fgets(gabarito,questoes + 5,stdin);

    fgets(aluno,questoes + 5,stdin);


    for(i = 0; i < questoes; i++){


        if(gabarito[i] == aluno[i]){
            pontos++;
        }

    }
    printf("%d\n", pontos);

    return 0;
}
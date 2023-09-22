#include <stdio.h>

int main(){
    int testes;
    scanf("%d", &testes);
    
    int n, i, j;
    for(i = 1; i <= testes; i++){
        scanf("%d", &n);
        int idade, capitao, meio;
        capitao = idade;
        meio = (n - 1)/2;

        for(j = 0; j < n; j++){
            scanf("%d", &capitao);
            if(j == meio){
                meio = capitao;

            }
            

        }
    

    printf("Case %d: %d\n", i, meio);

    }

    return 0;
    /*11875 Uva Online Judge - Brick Game em linguagem C :*/
}



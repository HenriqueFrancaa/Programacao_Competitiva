#include <stdio.h>
#include<stdbool.h>

int main(){

    while (true){

        int n, novo_numero;
        scanf("%d", &n);

        if(n <= 100){
            novo_numero = 91;
        }

        else if(n >= 101){
            novo_numero = n - 10;
        }


        if (n == 0){
            break;
        }

        printf("f91(%d) = %d\n", n, novo_numero); 
    }

    return 0;
    /*10696 Uva Online Judge ---> F91*/
}
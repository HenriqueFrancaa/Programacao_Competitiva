#include <stdio.h>

int main(){
    int testes, luz;
    int i;
    int a = 0;
    int b = 0;

    scanf("%d", &testes);
    
    for(i = 0; i < testes; i++){
        scanf("%d", &luz);
        if(luz == 1){
            if(a == 0){
                a++;
            }
            else if(a == 1){
                a--;
            }

        }
        else if(luz == 2){
            if(a == 0 && b == 0){
                a++;
                b++;
            }
            else if(a == 0 && b == 1){
                a++;
                b--;
            }
            else if(a == 1 && b == 1){
                a--;
                b--;
            }
            else if(a == 1 && b == 0){
                a--;
                b++;
            }
        }


    }
    printf("%d\n%d\n",a,b);


    return 0;

/*Questão do NepsAcademy - LAMPADAS em linguagem C :*/
}
